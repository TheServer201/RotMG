# RotMG

This repository is to host and share my attempt to make a new client for the game Realm of the Mad God.

It is licenced under the GPLv3.

## Ideas
1. Writed in C11 with minimal dependencies
2. Must be multiplatform (at least Windows and Linux)
3. Use modern technologies (SIMD and Vulkan)
4. The threads must be Lock-Free
5. Self updating through https://static.drips.pw/rotmg/production/current/

## Done
Connect to the game (100%)  
|-> Socket Layer  (socket.c)  
|-> Crypto Stuff  (https://tls.mbed.org/)  
|-> Serialization (serial.h)  
|-> Basic Packets (packet.h)  

Vulkan engine (25%)  
|-> Window Creation (window.c)  
|-> Vulkan Setup    (vulkan.c)  
|-> Command Buffer  
|-> Shaders  

Threads scheduler (25%)  
|-> C11 like thread (https://tinycthread.github.io/)  
|-> Look-Free Queue  
|-> Thread Pool  

Main stuff (50%)  
|-> Entry function      (main.c)  
|-> Inflate algorithm   (https://github.com/TheServer201/jinf_png)  
|-> SAX like XML parser (drafted)  

## Contact
Florent CABRET  
florent.cabret@gmail.com  
https://discord.gg/v6UMZuZ
