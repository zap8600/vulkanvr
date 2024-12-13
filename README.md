# stirlingengine
A game engine made in C++ made for VR.
## The idea
### Engine Design
The plan is to create a VR game engine with decent performance. It uses Vulkan for better control over the GPU, and [volk](https://github.com/zeux/volk) to get rid of the Vulkan loader overhead.
### Usage
The developer will create a function for an `Application` class that will be the main gameplay loop.