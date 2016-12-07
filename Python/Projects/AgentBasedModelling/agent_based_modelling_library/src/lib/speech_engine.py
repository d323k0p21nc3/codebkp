import os

msg_init = 'Welcome to Agent Based Modelling. By Prince, Vincent and William. '
msg_init += 'We will be going through a simulation of a farmer and agricultural officer. Discussing issues about the '
msg_init += 'recent passion fruit disease. Please wait while I start the simulation.'


def speak_female(message):
    voice = "'Microsoft Zira Desktop'"
    os.system('%SYSTEMROOT%\System32\WindowsPowerShell\\v1.0\powershell.exe -Command "Add-Type -AssemblyName System.speech; $speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; $speak.SelectVoice('+voice+'); $speak.Rate = -2; $speak.Speak(\''+message+'\')"')
    print('Talia:' + message)


def speak_male(message):
    voice = "'Microsoft David Desktop'"
    os.system('%SYSTEMROOT%\System32\WindowsPowerShell\\v1.0\powershell.exe -Command "Add-Type -AssemblyName System.speech; $speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; $speak.SelectVoice('+voice+'); $speak.Rate = -2; $speak.Speak(\''+message+'\')"')
    print('Isaac:' + message)