from src.lib.read_knowledge_base import get_json

json_outputs = get_json('outputs.json')


def get_response(topic, key):
    res = 'Sorry I do not know the answer to that'
    for x in json_outputs[topic]:
        res = x[key]
    return res
