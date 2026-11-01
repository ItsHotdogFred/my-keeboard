---
title: "TKL Keyboard"
author: "Ryan (ItsHotdogFred)"
description: "A custom TKL keyboard with per-key under-switch RGB and two rotary encoders for volume and mic control."
created_at: "2026-07-27"
total_time: "24h"
---

## What I built

I have built a keyboard which is fit for my purpose. It follows the TKL layout as it's the layout I am most familiar with and the layout I use every day. I also added RGB for each key which is placed below the switch instead of on the top like a lot of keyboards you may buy locally, this is because the keycaps I have in mind have the letters on the side of the keys not on the top. Then there are the 2 rotary encoders I added on the top right. 1 will be used for changing the volume and when pressed down it will mute the sound, the second rotary encoder will be used for my microphone. The reason is that I use many voice based apps and each changes my mic volume a lot and it is annoying having to manually go into settings to alter the volume. Pressing down on the rotary encoder will mute my mic as I prefer doing that over using push to talk which I find very annoying to use (mostly because I forget to press it).

I also built this keyboard as I have wanted to make a custom keyboard for a while now and doing this project meant I could control what is on my keyboard and what is not. It's also allowing me to choose the exact switches and keycaps that I use. I have learnt lots from this project. Before starting this project I had no idea what a SCH file is and how to make a PCB. Because of this project I now know how. After this I intend to check out the other Hack Club projects which involve making custom PCBs so I can master the craft.

---

# July 27, 2026: Keyboard layout and labels
<!-- fabricate:entry 1019 -->

I have created the keyboard layout itself and its labels. I now need to add the labels to the Raspberry Pi Pico.

<img width="1677" height="985" alt="image" src="https://fabricate.hackclub-assets.com/9661486d909266ef475adb179094a80754ff6561c6342758877d87a8adb50b5e/image-png/fc4de332-6419-4740-a1f4-9b7054ab08a0.png" />

**Total time spent: 1h**

# August 3, 2026: Remade the layout, Pico labels and started the PCB
<!-- fabricate:entry 1020 -->

I did A LOT during these 3 hours. Like basically remake the whole keyboard layout since it wasn't to my liking. Oh and I also added the Raspberry Pi Pico labels.

Here is my new schematic:

<img width="1463" height="972" alt="image" src="https://fabricate.hackclub-assets.com/9c259e832b2f17ba1a5979816e314a53bb0d1eeea7d023b8539a6415eca89228/image-png/d7e6053e-813c-4ed7-af99-e5235305c50e.png" />

It's a bit messy but that is a problem for another time.

I've also started working on the PCB. This was the most tedious part as this was when I decided that the layout wasn't to my liking and I had to revise it a lot.

Here is my PCB so far:

<img width="1509" height="849" alt="image" src="https://fabricate.hackclub-assets.com/6071dd8ae43d3e179753ab488da37160823c9e41d034c9394c7bebabf57cc825/image-png/9b0b4420-db3d-484c-8f11-32b24b7ffef9.png" />

Next is the copper layout stuff which looks like it's going to be fun (not).

**Total time spent: 3h**

# August 4, 2026: Copper wiring and 3D models
<!-- fabricate:entry 1021 -->

I did the copper wiring for both the front and back which was very confusing and tedious. I also added the models for the switches and keycaps which need some work.

<img width="1071" height="604" alt="image" src="https://fabricate.hackclub-assets.com/3a28bbe6f9b9b335c3c677bc3542752c2571e1b043702704bb2951d82b936b32/image-png/73321967-f0bc-44ca-a489-76af68a9db74.png" />

<img width="1307" height="630" alt="image" src="https://fabricate.hackclub-assets.com/88b013a51e3a7e88f4406537510619112c5dc2c78a31fbf16e4edf9b0889bebd/image-png/e7b43e96-69f0-4db4-98ae-bad920471b34.png" />

**Total time spent: 3h**

# August 8, 2026: Big rework, accurate keycaps and LEDs
<!-- fabricate:entry 1022 -->

I did A LOT of work in this time. The keyboard has been completely reworked to be more to my taste and workflow. One of the reasons why it took a bit longer to post this is because midway through doing all the major changes I realised that the keycaps that I was using weren't actually correct. For example the 1.5U keycap was closer to being 1.25U. Thankfully I found a program that allowed me to generate different sized keycaps which are accurate. I also added LED lights which hopefully are right and will work with the keycaps I have in mind. I also now need to redo the copper wiring so that will take an ungodly amount of time.

<img width="1725" height="745" alt="image" src="https://fabricate.hackclub-assets.com/f73ac104cc8332764610f2035fe86d1ee889ab08e5dc8bf15312330d1429e980/image-png/5c510621-22ca-4850-8c0c-887602e99e53.png" />

<img width="1996" height="763" alt="image" src="https://fabricate.hackclub-assets.com/8c32559a690967ae5a25325eec467de3319257508a59c10022ca9d84d3daea66/image-png/68581f8c-343f-430a-920e-3b3f53606bfd.png" />

Oh yeah I also made it smaller by quite a bit.

**Total time spent: 6h**

# August 10, 2026: Zero DRC violations!
<!-- fabricate:entry 1023 -->

FINALLY. ZERO DRC VIOLATIONS!!! (Apart from the hidden ones which are on purpose.) The routing is finished and EVERYTHING is connected. I learnt A LOT during these hours and I am so happy to be FINALLY done with the PCB. Now before I start designing a case I'll see if I am able to simulate some firmware or something like that just to see if the PCB is ready, but I am 95% sure it is.

Not really much to show off besides the routing:

<img width="1286" height="509" alt="image" src="https://fabricate.hackclub-assets.com/f54908c26582876abf1810e640b920703d1729b86122a9acc53e5e5fe3bad5df/image-png/5c25d236-640c-4c5a-897c-3de3c00a05a1.png" />

**Total time spent: 3h**

# August 16, 2026: Designing the case
<!-- fabricate:entry 1024 -->

I have created the case for the keyboard. It's a zero screw design and will be glued instead as I feel like that will be the best option for me. I am happy that I am now basically finished with the project and ready to ship it, though I will double check everything just in case I have missed something.

<img width="2106" height="828" alt="image" src="https://fabricate.hackclub-assets.com/b20f7f60c387b0891987f96ac65f4bd126c778164a025025a110fa6eaa13689d/image-png/500900c7-b635-4fe3-8171-7ecbc640301c.png" />

**Total time spent: 2h**

# August 27, 2026: Case fixes and hand routing (spoiler: this wasn't the final hour)
<!-- fabricate:entry 1025 -->

I have 100% finished this project!!! I fixed the case as some of the positioning was wrong and also added a wall to my keyboard which should hide all the dirt it will have after I make the keyboard. I also redid the routing as I felt like auto routing was cheating, so I redid it myself which ended up being sooo much better. The via count went down a lot since I used a zone fill for the 3V3 which reduced the amount of vias needed, although the routing is still garbage so I wouldn't call it "production ready" BUT, it works. I have had lots of fun working on this project and I will 100% look at the other PCB related things Hack Club has to offer. Thank you so much for this opportunity!!!

<img width="1365" height="511" alt="image" src="https://fabricate.hackclub-assets.com/36c44f4a8f5fb018e544a52e4ad3ec29e106db045ee84fb64a7d9a5427586262/image-png/880f2013-db92-4ef1-9666-04e26fbbb9b9.png" />

**Total time spent: 1h**

# September 1, 2026: Firmware (and losing some pins)
<!-- fabricate:entry 1026 -->

So the last entry wasn't the last hour of this project. I forgot to do the firmware, and while I was doing that I realised that QMK doesn't have the best support (or any actually) for the GPIO expanders. This meant that I had to shrink the amount of pins I can use (30 → 26). I was able to easily get to 28 by putting the rotary encoders' push on the key matrix instead of having their own pins. After that I removed COL15 and COL16 and put those keys on columns which had room for more keys. This allowed me to keep using the Pi Pico.

After that I could start on the firmware. I labelled each key in the KiCad PCB which made it so much easier to know what key is for what, so guessing wasn't necessary. Then I added the rotary encoders which was pretty simple as QMK natively supports them. Then it was the RGB. I could have done an RGB matrix but I realised that for my use case I would only be using a solid colour like I am right now with my current keyboard, as I find moving gradients or different colours too distracting.

Hopefully I am finished as everything seems to be done and I don't think I have missed anything. I have uploaded the code for the firmware + a compiled version as well. Again thank you Hack Club for this opportunity.

There isn't really much to show off as it was just following docs for making the firmware and rewiring pins.

<img src="https://i.imgur.com/Dddb3v5.png" width="600" alt="image">


---

**Total project time: 22h**

**Total time spent: 3h**

# November 1, 2026: Remade the whole case
<!-- fabricate:entry 1773 -->

Because my previous case was very bad and kept getting this project returned. I decided to start from scratch making it. It now features a top mount design. This means there is an actual way to mount the top plate to the rest of the case. There is also lots of space for the PCB inside the case meaning if I feel like putting foam to dampen the sound, I can. Because the case is wider than 256mm. I will use the software built for my 3d printer to split each part in half and then use glue to fuse them together. 

![Top](https://fabricate.hackclub-assets.com/60df60eda4d11126e026fea6c3dad7b8bc13fb826656a1d4bf964e63eca67f41/image-png/image.png)
![Side](https://fabricate.hackclub-assets.com/5c18a82988c9e40db1e130089aa0abbc05a156caaadb16f5f410e8791941c06b/image-png/image.png)
![Back](https://fabricate.hackclub-assets.com/ce329857c15393b935dc30c6ad2a3984f0b80a556ca3a5db77040396de4dc881/image-png/image.png)

**Total time spent: 2h**
