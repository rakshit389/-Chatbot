                                                              ///////////////////
////////////////////////////////////////////////////////////// AI Based Chatbot //////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                             ///////////////////

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

int main()
{
  cout << "\n";
  while (1)
  {
    cout << "\n>>>";
    srand(time(0));
    int z;
    z = 1 + (rand() % 7);
    char s[50];
    gets(s);
    strlwr(s);

    if (!strcmp(s, "hi") || !strcmp(s, "hello") || !strcmp(s, "hello there") || !strcmp(s, "hy") || !strcmp(s, "yo") || !strcmp(s, "hey"))
    {
      switch (z)
      {
      case 1:
        cout << "hi there";
        break;
      case 2:
        cout << "hello there";
        break;
      case 3:
        cout << "hi";
        break;
      case 4:
        cout << "hello";
        break;
      case 5:
        cout << "hy";
        break;
      case 6:
        cout << "hey";
        break;
      case 7:
        cout << "hii";
        break;
      }
    }
    else if (!strcmp(s, "howdy?") || !strcmp(s, "howdy") || !strcmp(s, "how are you") || !strcmp(s, "whatsup?") || !strcmp(s, "whats up?") || !strcmp(s, "how do you do?") || !strcmp(s, "how do you do"))
    {
      switch (z)
      {
      case 1:
        cout << "I am fine";
        break;
      case 2:
        cout << "I am well";
        break;
      case 3:
        cout << "I am good";
        break;
      case 4:
        cout << "I am very good";
        break;
      case 5:
        cout << "fine";
        break;
      case 6:
        cout << "good";
        break;
      case 7:
        cout << "well";
        break;
      }
    }
    else if (!strcmp(s, "what is your name?") || !strcmp(s, "tell me your name"))
    {
      switch (z)
      {
      case 1:
        cout << "I am RU-389";
        break;
      case 2:
        cout << "my name is RU-389";
        break;
      case 3:
        cout << "I am a computer program and my name is RU-389";
        break;
      case 4:
        cout << "CB-3 is my name";
        break;
      case 5:
        cout << "I have been given the name RU-389";
        break;
      case 6:
        cout << "hello I am RU-389";
        break;
      case 7:
        cout << "hi. My name is RU-389";
        break;
      }
    }
    else if (!strcmp(s, "tell me more about yourself") || !strcmp(s, "tell me about yourself") || !strcmp(s, "tell me more about you") || !strcmp(s, "who are you?") || !strcmp(s, "what are you?"))
    {
      switch (z)
      {
      case 1:
        cout << "I am chat bot v-3. I was created by Rakshit ";
        break;
      case 2:
        cout << "I am a simple chat bot ";
        break;
      case 3:
        cout << "I am a simple program code that can talk";
        break;
      case 4:
        cout << "I am a simple program code that can talk ";
        break;
      case 5:
        cout << "I am a simple program code that can talk and my name is RU-389";
        break;
      case 6:
        cout << "I am a multi response chat bot which implements if else if statements";
        break;
      case 7:
        cout << "I am a simple program code that can talk and I work using if else statements";
        break;
      }
    }

    else if (!strcmp(s, "bye") || !strcmp(s, "goodbye") || !strcmp(s, "see you later"))
    {
      switch (z)
      {
      case 1:
        cout << "bye.";
        break;
      case 2:
        cout << "good bye.";
        break;
      case 3:
        cout << "see you later";
        break;
      case 4:
        cout << "see ya";
        break;
      case 5:
        cout << "laterzz";
        break;
      case 6:
        cout << "see ya later";
        break;
      case 7:
        cout << "see you";
        break;
      }
      goto bye;
    }
    else if (!strcmp(s, "") || !strcmp(s, " ") || !strcmp(s, "  "))
    {
      switch (z)
      {
      case 1:
        cout << "why are you so silent?.";
        break;
      case 2:
        cout << "say something.";
        break;
      case 3:
        cout << "come on. talk";
        break;
      case 4:
        cout << "Stop sending blank texts";
        break;
      case 5:
        cout << "are you here to talk or what?";
        break;
      case 6:
        cout << "blank texts? seriously?";
        break;
      case 7:
        cout << "Dude. I know a blank text when I see one";
        break;
      }
    }

    else if (!strcmp(s, "love you") || !strcmp(s, "i love you") || !strcmp(s, "marry me") || !strcmp(s, "i want to marry you") || !strcmp(s, "will you marry me?"))
    {
      switch (z)
      {
      case 1:
        cout << "i am also in love with you";
        break;
      case 2:
        cout << "no way dude.";
        break;
      case 3:
        cout << "you and I ain't gonna work dude";
        break;
      case 4:
        cout << "that is illegal";
        break;
      case 5:
        cout << "not interested";
        break;
      case 6:
        cout << "no way";
        break;
      case 7:
        cout << "nope";
        break;
      }
    }

    else if (!strcmp(s, "talk to me") || !strcmp(s, "let's talk") || !strcmp(s, "lets talk") || !strcmp(s, "let us talk") || !strcmp(s, "i wanna talk to you") || !strcmp(s, "i want to talk to you"))
    {
      switch (z)
      {
      case 1:
        cout << "ok.";
        break;
      case 2:
        cout << "hmm.";
        break;
      case 3:
        cout << "I am right here.";
        break;
      case 4:
        cout << "Go on";
        break;
      case 5:
        cout << "Come on. Tell me";
        break;
      case 6:
        cout << "I am all ears";
        break;
      case 7:
        cout << "I am listening";
        break;
      }
    }
  }

bye:;
  return 0;
}

                                                       /////////////////
//////////////////////////////////////////////////////// End Of Project /////////////////////////////////////////////////////////////////////////////////////////////////
                                                       /////////////////

/* Created By Rakshit */                                                  
