from gtts import gTTS  # speech engine
import pyglet
import speech_recognition as sr
import eyed3  # get length of audio

imports_avbin = 'lib/avbin.dll'
msg_init = 'Hi Derek, how are you?'
lang_default = 'en'
msg_file = 'temp/msg.mp3'


def listen():

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Say something!")
        audio = r.listen(source)

    try:
        # for testing purposes, we're just using the default API key
        # to use another API key, use `r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`
        # instead of `r.recognize_google(audio)`
        #print("Google Speech Recognition thinks you said " + r.recognize_google(audio))
        speak("Did you say "+r.recognize_google(r.recognize_google(audio)))
    except sr.UnknownValueError:
        #print("Google Speech Recognition could not understand audio")
        speak("Sorry I did not quite get that")
    except sr.RequestError as e:
        #print("Could not request results from Google Speech Recognition service; {0}".format(e))
        speak("Sorry I am having some trouble with my ear")


def speak(message):
    pyglet.lib.load_library(imports_avbin)
    pyglet.have_avbin = True

    tts = gTTS(text=message, lang=lang_default)
    tts.save(msg_file)

    msg = pyglet.resource.media(msg_file)
    msg.play()

    def exiter(dt):
        pyglet.app.exit()

    pyglet.clock.schedule_once(exiter, eyed3.load(msg_file).info.time_secs+1)

    pyglet.app.run()


def _init_():
    speak(msg_init)
    listen()


_init_()



