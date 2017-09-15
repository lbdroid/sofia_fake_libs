# sofia_fake_libs
build some fake libraries to fool the sofia server with<br>
<br>
All we are really doing with this project is using it to build fake libraries. The joying software chokes if it thinks it isn't in charge of everything, so as we take a bit of control, we need to feed it false information.<br>
<br>
At the moment, I have a fake libjni_i2c.so and a wrapper for it. I will be adding more replacement libraries until the point I am able to replicate the functionality enough to simply DELETE the sofia server altogether.
