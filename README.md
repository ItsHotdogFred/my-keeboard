This is my custom keyboard for hackclub.

What have I built: I have built a keyboard which is fit for my purpose. It follows the TKL layout as it's the layout I am most familiar with and the layout I use everyday. I also added RGB for each key which is placed below the switch instead of on the top like alot of keyboards you may buy locally, this is because the keycaps I have in mind have the letters on the side of the keys not on the top. Then there is the 2 rotary encoders I added on the top right. 1 will be used for changing the volume and when pressed down they will mute the sound, the second rotry encoder will be used for my microphone. The reason is that I use many voice based apps and each change my mic volume alot and it is annoying having to manually go into settings to alter the volume, pressing down on the rotary encoder will mute my mic as I prefer doing that than using push to talk which I find very annoying to use (mostly because I forget to press it). I also built this keyboard as I have wanted to make a custom keyboard for a while now and doing this project ment I could control what is on my keyboard and what is not. It's also allowing to choose the exact switches and keycaps that I use. I have learnt lots for this project. Before starting this project I had no idea what a SCH file is and how to make a PCB. Because of this project I now know how. After this I intend to check out the other hackclub projects which involve making custom PCBs so I can master the craft.

HOUR 1:

<img width="1677" height="985" alt="image" src="https://github.com/user-attachments/assets/fc4de332-6419-4740-a1f4-9b7054ab08a0" />

I have created the keyboard layout itself and its labels. I now need to add the labels to the raspberry pi pico

HOURS 2 - 4:

I did ALOT during these 3 hours. Like basically remake the whole keyboard layout since it wasn't to my liking. Oh and I also add the raspberry pi pico labels
here is my new schematic:

<img width="1463" height="972" alt="image" src="https://github.com/user-attachments/assets/d7e6053e-813c-4ed7-af99-e5235305c50e" />

It's a bit messy but that is a problem for another time

I've also started working on the PCB. This was the most tedious part as this was when I decided that the layout wasn't to my liking and I had to revise it alot.
Here is my PCB so far:

<img width="1509" height="849" alt="image" src="https://github.com/user-attachments/assets/9b0b4420-db3d-484c-8f11-32b24b7ffef9" />
Next is the copper layout stuff which looks like it's going to be fun (not)

HOURS 5 - 7:

I did the copper wiring for both the front and back which was very confusing and tedious. I also added the models for the switches and keycaps which need some work

<img width="1071" height="604" alt="image" src="https://github.com/user-attachments/assets/73321967-f0bc-44ca-a489-76af68a9db74" />


<img width="1307" height="630" alt="image" src="https://github.com/user-attachments/assets/e7b43e96-69f0-4db4-98ae-bad920471b34" />

HOURS 8 - 13

I did ALOT of work in this time. The keyboard has been completely reworked to be more to my taste and workflow. Though one of the reasons why it took a bit longer to post this is because midway through doing all the major changes I realized that the keycaps that I were using weren't actually correct. For example the 1.5U keycap was closer to being 1.25U. Thankfully I found a problem that allowed me to generate different sized key caps which are accurate. I also added LED lights which hopefully are right and will work with the keycaps I have in mind. I also now need to redo the copper wiring so that will take an ungodly amount of time.

<img width="1725" height="745" alt="image" src="https://github.com/user-attachments/assets/5c510621-22ca-4850-8c0c-887602e99e53" />

<img width="1996" height="763" alt="image" src="https://github.com/user-attachments/assets/68581f8c-343f-430a-920e-3b3f53606bfd" />

Oh yeah I also made it smaller by quite a bit

HOURS 14 - 16

FINALLY. ZERO DRC VIOLATIONS!!! (Apart from the hidden ones which are on purpose) The routing is finished and EVERYTHING is connected. I learnt ALOT during these hours and I am so happy to be FINALLY done with the PCB. Now because I start designing a case I'll see if I am able to simulate some firmware or something like that just to see if the PCB is ready but I am 95% sure it is.
<img width="1286" height="509" alt="image" src="https://github.com/user-attachments/assets/5c25d236-640c-4c5a-897c-3de3c00a05a1" />
Not really much to show off besides the routing

HOURS 17 - 18

I have created the case for the keyboard. It's a zero screw design and will be glued instead as I feel like that will be the best option for me. I am happy that I am now basically finished with the project and ready to ship it through I will double check everything just in case I have missed something.
<img width="2106" height="828" alt="image" src="https://github.com/user-attachments/assets/500900c7-b635-4fe3-8171-7ecbc640301c" />

HOURS 19 (Spoiler this wasn't the final hour)

I have 100% finished this project!!! I fixed the case as some of the positing was wrong and also added a wall to my keyboard which should hide all the dirt It will have after I make the keyboard. I also redid the routing as I felt like auto routing was cheating so I redid it myself which ended up being sooo much better. The via count went down alot since I used a zone fill for the 3v3 which reduced the amount of vias needed to be used, although the routing is still garbage so I wouldn't call it "production ready" BUT, it works. I have had lots of fun working on this project and I will 100% look at the other PCB related things hackclub has to offer. Thank you so much for this opportunity!!!

<img width="1365" height="511" alt="image" src="https://github.com/user-attachments/assets/880f2013-db92-4ef1-9666-04e26fbbb9b9" />

HOURS 20 - 22

So Hour 19 wasn't the last hour of this project. I forgot to do the firmware but while I was doing that I realised that QMK doesn't have the best support or any actually for the GP expanders. This ment that I had to shrink the amount of pins I can use (30 - 26). I was able to easily get to 28 by putting the Rotary encoder's push on the key matrix instead of having it's own pin after that I removed COL15 and 16 and put the keys on COLS which had room for more keys. This allowed me to continue using the pi pico. After that I could start on the firmware. I labeled each key in the kicad pcb which made it so much easier what key is for what and made it so guessing wasn't necessary. Then I added the rotary encoders which was pretty simple as QMK natively supports it. Then it was the RGB, now I could of done an rgb matrix but I realized that for my usecase. I would only be using a solid colour like I am right now with my current keyboard as I find moving gradients or different colours too distracting. Hopefully I am finished as everything seems to be done and I don't think I have missed anything. I have uploaded the code for the firmware + a compiled version aswell. Again thank you hackclub for this opportunity.

There isn't really much to show off as It was just following docs for making the firmware and rewiring pins so here is an accurate representation of what I looked like when I realized I had to do firmware:
<img width="189" height="148" alt="image" src="https://github.com/user-attachments/assets/379eb34d-a929-4d5d-902b-1c0e4b13e3f6" />


