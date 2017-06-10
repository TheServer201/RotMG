# RotMG

This repository is to host and share my attempt to make a new client for the game Realm of the Mad God. It is licenced under the GPLv3.

## Ideas
1. Writed in C11 with minimal dependencies
2. Must be multiplatform (at least Windows and Linux)
3. Use modern technologies (SIMD and Vulkan)
4. The threads must be Lock-Free
5. Self updating through https://static.drips.pw/rotmg/production/current/

## Done
Connect to the game (100%)  
&#8627; Socket Layer  (socket.c)  
&#8627; Crypto Stuff  (https://tls.mbed.org/)  
&#8627; Serialization (serial.h)  
&#8627; Basic Packets (packet.h)  

Vulkan engine (25%)  
&#8627; Window Creation (window.c)  
&#8627; Vulkan Setup    (vulkan.c)  
&#8627; Command Buffer  
&#8627; Shaders  

Threads scheduler (25%)  
&#8627; C11 like thread (https://tinycthread.github.io/)  
&#8627; Look-Free Queue  
&#8627; Thread Pool  

Main stuff (50%)  
&#8627; Entry function      (main.c)  
&#8627; Inflate algorithm   (https://github.com/TheServer201/jinf_png)  
&#8627; SAX like XML parser (drafted)  

## Contact
Florent CABRET  
florent.cabret@gmail.com  
https://discord.gg/v6UMZuZ
