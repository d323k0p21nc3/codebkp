import json
import threading

from flask import Flask, render_template, request

from src.lib.service import get_response
from src.lib.speech_engine import speak_male, speak_female, msg_init
from src.lib.read_knowledge_base import get_json

app = Flask(__name__)


@app.route("/")
def welcome_dev():
    return render_template('ui.html')


@app.route("/init")
def initialize():
    speak_female(msg_init)
    return "done"


@app.route("/get_json", methods=['POST'])
def agent_based_model():
    file = request.form['file']
    json_string = get_json(file)
    return json.dumps({'status': 'OK', 'json_inputs': json_string})


@app.route("/ask", methods=['POST'])
def ask_respond():
    topic = request.form['topic']
    ask = request.form['ask']
    key = request.form['key']
    response = get_response(topic, key)
    speak_female(ask)
    speak_male(response)
    # thread_ask = threading.Thread(target=speak_female(ask))
    # thread_respond = threading.Thread(target=speak_male(response))
    #
    # thread_ask.daemon = True
    # thread_respond.daemon = True
    # thread_respond.start()
    # thread_ask.start()
    # thread_ask.join()
    # thread_respond.join()

    print(response)
    return response


if __name__ == "__main__":
    app.run(debug=True)
