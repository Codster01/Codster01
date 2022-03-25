import pyttsx3
import datetime
import wikipedia
import webbrowser
import speech_recognition as sr
import os
# import pywhatkit
from yahoo_fin.stock_info import *
from PIL import Image
import pyjokes


# url='https://google.com'
# webbrowser.get('C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe %s').open("http://goggle.com")



engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)


def dict_what(aayush=None):
    str: aayush == "+918369037690"


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour < 12:
        speak("good Morning")

    elif hour >= 12 and hour < 18:
        speak("Good Afternoon")

    else:
        speak("Good Evening")


    speak("I am jarvis Sir")
filename = "C:\\Users\\abc\\Downloads\\1.jpg"
img = Image.open(filename)
img.show()


def takecommand():  # microphone input
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print('Listening....')
        r.pause_threshold = 1
        r.operation_timeout = 0.5
        audio = r.listen(source)
        r.adjust_for_ambient_noise(source, duration=2)



    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")
        # speak("Yes you said " +query)
        return query

    except  Exception as e:

        # print(e)

        print("Say that again, Sir ")
        return "None"


if __name__ == '__main__':
    wishMe()



while True:
    query = takecommand().lower()

    if 'enough' in query:
       break



    if 'wikipedia' in query:
        speak('Searhing wikipedia...')
        query = query.replace("wikipedia", "")
        results = wikipedia.summary(query, sentences =1)
        speak("I got this from wiki")
        print(results)
        speak(results)

    elif 'open' in query:
        a = query.split()
        b = a[1]


        webbrowser.get('chrome').open(b + '.com')

    elif 'open google' in query:
        webbrowser.open("https://www.google.co.in/")

    elif 'happy' in query:
        speak('Happiness keeps you sweet')

    elif 'sad' in query:
        webbrowser.open('https://www.goodreads.com/quotes/tag/sadness')

    elif 'angry' in query:
        speak('just keep calm and have faith on god')


    elif 'take me to oppo phone' in query:
        webbrowser.open('https://www.google.com/android/find?u=1&utm_source=Google&utm_medium=onebox')


    elif 'play music' in query:
        music_dir = 'D:\Vibehai\Songs'
        Songs = os.listdir(music_dir)
        os.startfile(os.path.join(music_dir,Songs[0]))

    elif 'team' in query:
        teams_dir = 'C:\\Users\\abc\\AppData\\Local\\Microsoft\\Teams\\current\\Teams.exe'
        os.startfile(teams_dir)

    elif 'time' in query:
        strTime = datetime.datetime.now().strftime("%H:%M:%S")
        speak(f"Sir the time is{strTime}")

    # elif 'whatsapp message to ayush' in query:
    #   pywhatkit.sendwhatmsg("+918369037690", "Hello bete", 17, 7, 15,)

    elif 'Share prize of Nifty ' in query:
        speak(get_live_price("FB"))
        print(get_live_price("NSEI"))



    elif 'say hi to '  in query:
        a = query.split()
        b = a[1]
        c= a[2]
        d= a[3]

        speak('Hello how are you'+ d)
        if 'darshana' in query:
            speak("You are not good you are the best")

        elif 'ayush' in query:
            speak("have you completed your assignments? And your 2 hours are about to finish,and yeah I also know about your power source")




    elif 'how are you' in query:
        speak("I am fine Sir, how are you?")


    elif 'who are you' in query:
        speak("I am an  Ai made by Dhruv. I am still in process  ")



    elif 'jokes'  in query:
        jokes = pyjokes.get_joke(language="en",category="neutral")
        print(jokes)
        speak(jokes)


    elif ' plus ' in query:
        a = query.split()
        b = a[1]
        c = a[2]
        d = a[3]





# def whatsapp():



