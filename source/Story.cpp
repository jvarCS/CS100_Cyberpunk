#include <iostream>
#include "../header/Story.h"
#include "../header/Character.h"
#include "../header/CharacterData.h"

using namespace std;

void Story::newLine() {
    cout << "           [ENTER]";
    cin.get();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


void Story::importantInfo() {
    cout << "---------------------------------Important Info---------------------------------\n"
         << "When playing this game you will see \"[ENTER]\" appear in the terminal.\n"
         << "Simply press the \"Enter\" key in order to continue playing.";
    newLine();
}

void Story::intro() {
    cout << "...."; newLine();
    cout << "She listens to David's live feed, desperately hoping to hear any sign of his survival"; newLine();
    cout << "..."; newLine();
    cout << ".."; newLine();
    cout << "\"I had some fun afterall\""; newLine();
    cout << "\"You know, you could prove an interesting construct\""; newLine();
    cout << "\"Whatever choom. Like I give a R*D@#TED\""; newLine();
    cout << "\"Oh well\""; newLine();
    cout << "Silence falls once again, to be broken only by the sound of a single gunshot"; newLine();
    cout << "\"Yes, it's done\""; newLine();
    cout << "\"Understood. Preparations for engram construction will begin immediately\""; newLine();
    cout << "END COMM"; newLine();
}

void Story::actOne() {
    cout << "\"Edgerunners!\""; newLine();
    cout << "\"Hear me now\""; newLine();
    cout << "You can't believe it."; newLine();
    cout << "It's really him"; newLine();
    cout << "Johnny Silverhand, Night City legend"; newLine();
    cout << "When you took this job you thought it was just some tripped up fixer using his name"; newLine();
    cout << "Guess you were wrong"; newLine();
    cout << "You've heard the stories about him"; newLine();
    cout << "Like the one where he lead a whole Militech assault on the Arasaka Towers"; newLine();
    cout << "And dropped on a nuke on them"; newLine();
    cout << "\"Today is the day you'll finally put to good use the chrome that's replaced so much of your god given flesh\""; newLine();
    cout << "\"Today is the day you show our wonderful abode that is Night City, what it means to BE an Edgerunner\""; newLine();
    cout << "\"Today\""; newLine();
    cout << "\"...\""; newLine();
    cout << "\"Is the day we hit Arasaka\""; newLine();
    cout << "Looks like the stories were true"; newLine();
    cout << "Johnny keeps talking but you tune him out as thoughts of why you took this job flood your mind"; newLine();
    cout << "You've never been one to \"Do Good\" for the city"; newLine();
    cout << "After all, what good has it done for you"; newLine();
    cout << "The promise of keeping any Arasaka chrome you find was just too good to pass up, and so here you are"; newLine();
    cout << "But"; newLine(); 
    cout << "It might just be that hitting a corrupt piece of #%$@ corpse like 'Saka feels pretty good too"; newLine();
    cout << "Whatever the real reason might be, you decide it's beyond you as you realize Johnny is now quiet"; newLine();
    cout << "\"Hey!\""; newLine();
    cout << "Is he talking to you?"; newLine();
    cout << "\"Chrome got you hexed up already or what? I'm talking to you!\""; newLine();
    cout << "Yup he's talking to you"; newLine();
    cout << "\"Get over here!\""; newLine();
    cout << "The image of a scorpion and the collor yellow pop into your mind as he says that"; newLine();
    cout << "You decide to stop wasting time and go see what he wants"; newLine();
    cout << "\"You wanna know somethin' funny?\""; newLine();
    cout << "\"You are the only new face I see here\""; newLine();
    cout << "\"The rest of these goons might as well be on corpse payroll with how often they work with me\""; newLine();
    cout << "\"So\""; newLine();
    cout << "\"Tell me\""; newLine();
    cout << "\"Who are you?\""; newLine();
}

void Story::actTwo(Character *p) {
    cin.ignore();
    cout << "\"Nice to meet you " << p->Name() << "\""; newLine();
    if (p->Origin() == Character::Path::Corporate) {
        cout << "\"So you were actually on corpse payroll?\""; newLine();
        cout << "\"Well I'll be damned\""; newLine();
        cout << "\"Takes guts to leave that kinda life style behind\""; newLine();
        cout << "\"Takes even more to be able to look at yourself in the mirror when you're livin' it\""; newLine();
        cout << "\"And now you're about to hit the biggest corp of them all\""; newLine();
        cout << "\"Ain't life funny like that sometimes?\""; newLine();
    }
    else if (p->Origin() == Character::Path::Nomad) {
        cout << "\"You know I've done some travelling myself\""; newLine();
        cout << "\"Always end up coming back to Night City though\""; newLine();
        cout << "\"Guess you just can't get enough of it once you've had it\""; newLine();
    }
    else {
        cout << "\"So you grew up right here in Night City\""; newLine();
        cout << "\"Gotta be a different breed to do that\""; newLine();
    }
    cout << "\"Anyways\""; newLine();
    cout << "\"Now that everyone knows everyone\""; newLine();
    cout << "\"Hows about we quit this lollygagging and go and introduce ourselves to Arasaka\""; newLine();
    cout << "You and the rest of Johnny's team load up into an AV"; newLine();
    cout << "As it starts ascending, you begin thinking to yourself"; newLine();
    cout << "You've done plenty of risky jobs before"; newLine();
    cout << "Arasaka's involvement shouldn't make this one any more dangerous than the others"; newLine();
    cout << "However"; newLine();
    cout << "You can't help but feel a little uneasy about going staight to their front door"; newLine();
    cout << "Thinking about all the loot you'll get calms you down"; newLine();
    cout << "Johnny gets up and announces our arrival"; newLine();
    cout << "This is it"; newLine();
    cout << "Arasaka"; newLine();
}

void Story::actThree(Character *p) {
    cout << "The second the AV lands, all hell breaks loose"; newLine();
    cout << "Most of the team is already out the door firing back at Arasaka cylons, corporate security officers"; newLine();
    cout << "You're about to get on the ground when Johnny calls you"; newLine();
    cout << "\"" << p->Name() << "!\""; newLine();
    cout << "\"Falco!\""; newLine();
    cout << "\"You two are with me\""; newLine();
    cout << "Falco was one the guys Johnny introduced earlier"; newLine();
    cout << "He didn't say much about him other than the fact that he was an important asset to the job"; newLine();
    cout << "\"While everyone else is keeping these cylons busy in the front, were gonna find a way inside\""; newLine();
    cout << "You hand't realize it before, but you're at the Arasaka Towers"; newLine();
    cout << "The same place Johnny was all those years ago"; newLine();
    cout << "All the noise and commotion down below becomes a distant thought as the AV begins to ascend once again"; newLine();
    cout << "You must've gone up a hundred stories before Johnny stops the pilot and tells you to blow a hole into the tower"; newLine();
    cout << "You do, and then jump from the AV into the tower, being careful to mind the gap between the two that would surely lead to your untimely demise otherwise"; newLine();
    cout << "Upon landing in the room, you see a cylon already waiting for you"; newLine();
    cout << "Good"; newLine();
    cout << "You were itching to see some action"; newLine();
}

void Story::breakOne() {
    cin.ignore();
    cout << "The Saka' cylon finally falls to the ground"; newLine();
    cout << "But before you get the chance to even reload, two more Saka' mouth breathers show up"; newLine();
    cout << "Such is the life of an Edgerunenr"; newLine();
}

void Story::actFour(Character *p) {
    cout << "The Saka cylon finally falls to the ground"; newLine();
    cout << "Johnny and Falco join you as they leap through the perfect hole you made in the tower"; newLine();
    cout << "Johnny looks at the dead corpse and then at you"; newLine();
    cout << "\"I see you've handled business here\""; newLine();
    cout << "\"Goodjob\""; newLine();
    cout << "The three of you head out of the room and enter a barren space with nothing but a set of stairs in the middle"; newLine();
    cout << "It's a large room devoid of all color except the most piercing white you've ever seen"; newLine();
    cout << "You all ascend them and are met with a seamingly impenetrable door"; newLine();
    cout << "This is Arasaka Towers afterall, but you can't help but wonder why a door like this would be randomly placed here"; newLine();
    cout << "Johnny sees the look of confusion on your face and decides to give you an explanation while Falco starts working on the door"; newLine();
    cout << "\"Well " << p->Name() << ", you're probably wondering why we're here\""; newLine();
    cout << "\"Does the name David Martinez sound familiar to you\""; newLine();
    cout << "That's that Edgerunner that the whole city was talking about not too long ago"; newLine();
    cout << "\"Well it should cuz he's the newest addition to the ever pleasant group of Night City legends\""; newLine();
    cout << "You wonder what all this info has to do with the job"; newLine();
    cout << "\"And he was recently shot dead in the head by none other than the Weapon of Arasaka and fellow Night City legend, Adam Smasher\""; newLine();
    cout << "Oh"; newLine();
    cout << "\"Poor Falco was there when it all went down too\""; newLine() ;
    cout << "\"Now the reason we're here is because despite being dead, good ol' Saka ain't through with David\""; newLine();
    cout << "\"We're gonna make sure they are\""; newLine();
    cout << "Johnny sees an even more bewildered look appear on your face and realizes that might not have been the clearest of explanations"; newLine();
    cout << "But"; newLine();
    cout << "Before he gets the chance to ammend himself, the loudest explosion you've heard followed by countless cylons and even a couple chrome jockies interupt"; newLine();
    cout << "\"Falco!\""; newLine();
    cout << "\"We'll handle this, you just get that door open!\""; newLine();
}

void Story::actFive(Character *p) {
    cout << "You lay waste to the last Saka' goon in front of you and return to cover, taking a moment to catch your breath"; newLine();
    cout << "Turning to Johnny, you see him do the same"; newLine();
    cout << "The threat having been dealt with, you both return to Falco"; newLine();
    cout << "Suprisingly, he got the door open"; newLine();
    cout << "\"We've only been here for a couple minutes and you got the door open already?!\""; newLine();
    cout << "\"I learned from the best when it comes to these kinda things\""; newLine();
    cout << "You don't doubt him for a second"; newLine();
    cout << "You didn't even know it was a door until he started working on it"; newLine();
    cout << "To be fair, it was one of those doors that are just apart of the wall"; newLine();
    cout << "Classic Saka'"; newLine();
    cout << "You all begin to walk through the door"; newLine();
    cout << "Johnny turns to you"; newLine();
    cout << "\"Well nows a good a time as any\""; newLine();
    cout << "\"" << p->Name() << "\""; newLine(); 
    cout << "\"Do you know what a construct is?\""; newLine();
    cout << "\"It is the consciousness of an individual which has been copied into coding form\""; newLine();
    cout << "\"They're created using a program called Soulkiller, an-\""; newLine();
    cout << "\"It's basically a digital copy of yourself and people believe that it's the sure shot method of obtaining immortality\""; newLine();
    cout << "\"They're wrong"; newLine();
    cout << "\"...\""; newLine();
    cout << "\"I would know\""; newLine();
    cout << "Does he mean.."; newLine();
    cout << "\"The reason we're here is to stop Arasaka from turning David into a construct\""; newLine();
    cout << "\"I know I said he was killed but creating a construct doesn't require the person to be alive\""; newLine();
    cout << "\"Bastard was able to use the Cyber Skeleton without dying on the spot\""; newLine();
    cout << "\"Who knows what Arasaka would do with a construct like that\""; newLine();
    cout << "You all walk some more and it becomes progressively darker"; newLine();
    cout << "Falco suddenly stops"; newLine();
    cout << "\"We're here\""; newLine();
    cout << "You can barely see Johnny turn to him with a confused face"; newLine();
    cout << "\"What?\""; newLine();
    cout << "\"I don't see a damn thing\""; newLine();
    cout << "Falco's eyes start glowing"; newLine();
    cout << "He's netrunning"; newLine();
    cout << "\"There\""; newLine();
    cout << "As he says that, a capsule begins to emerge from the ground"; newLine();
    cout << "A soft blue light eminates from it"; newLine();
    cout << "It's David"; newLine();
    cout << "Johnny said he had died but his body seems perfectly intact"; newLine();
    cout << "Is this really him?"; newLine();
    cout << "\"Falco start prepping him for transfer\""; newLine();
    cout << "\"We're not gonna wanna be here for much longer\""; newLine();
    cout << "Almost as if the universe heard Johnny, the door you entered from begins closing"; newLine();
    cout << "Now the only source of light is the capsule in front of you"; newLine();
    cout << "And an ominous dark red approaching in the distance"; newLine();
    cout << "Johnny's face turns stonecold"; newLine();
    cout << "\"He's here\""; newLine();
}

void Story::actSix() {
    cout << "Before he's able to utter another word, Adam Smasher charges through the darkness and pummels Johnny"; newLine();
    cout << "\"I see you're still alive Johnny\""; newLine();
    cout << "\"After all these years you still cling to your old ways\""; newLine();
    cout << "\"We won't fail again with David\""; newLine();
    cout << "Smasher aims at Johnny"; newLine();
    cout << "You empty a fast one straight into his head to get his attention"; newLine();
    cout << "Though since his skull is completely encased in metal, it merely ricochets off"; newLine();
    cout << "\"And who is this?\""; newLine();
    cout << "\"Someone else you've brought along to die?\""; newLine();
    cout << "\"For your sake\""; newLine();
    cout << "\"I won't make this quick\""; newLine();
}
void Story::actSeven(Character *p) {
    cout << "\"How could I...\""; newLine();
    cout << "Reality itself said today was your day because somehow, you beat Adam Smasher"; newLine();
    cout << "You were able to pierce through his high tech Arasaka armor and deal enough damamge to knock him down on his knees"; newLine();
    cout << "While you were busy with Smasher, Falco tended to Johnny AND got the David's construct ready for transport"; newLine();
    cout << "He really is something special ain't he";  newLine();
    cout << "The three of you, well four now, head back out the door and onto the Tower rooftops"; newLine();
    cout << "When you arrive, there's already an AV waiting for you"; newLine();
    cout << "A white haired girl calls from the AV"; newLine();
    cout << "\"Falco!\""; newLine();
    cout << "\"Lucy\""; newLine();
    cout << "\"We got him\""; newLine();
    cout << "You, Johnny, and Falco load David onto the AV"; newLine();
    cout << "The job was a success"; newLine();
    cout << "Arasaka was nothing you couldn't handle"; newLine();
    cout << "\"SILVERHANDDD\""; newLine();
    cout << "Despite relinquishing part of your humanity to acquire cybernetic enhancements, you've never felt more terrified"; newLine();
    cout << "More human"; newLine();
    cout << "Than you do right now hearing that scream"; newLine();
    cout << "It's Smasher"; newLine();
    cout << "Instead of trying your luck, you all board the AV and it begins to ascend"; newLine();
    cout << "\"Come back and learn that noone beats me!\""; newLine();
    cout << "Smasher looks desperate to fight again"; newLine();
    cout << "Johnny looks at you"; newLine();
    cout << "And with a smirk on his face, yells back at Smasher"; newLine();
    cout << "I know you hate losing bub but you'd do well to remeber this"; newLine();
    cout << "You got your #$% kicked by an Edgerunner today\""; newLine();
    cout << "\"And their name is " << p->Name() << "!\""; newLine();
}
