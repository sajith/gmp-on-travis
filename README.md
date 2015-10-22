This is just a quick check for libgmp-dev on Travis CI's container
infrastructure.  Of course it is simple and silly; in my defense, I
wrote this to figure out some confusing linking error when building
Haskell code on Travis containers.

(In the end, it turned out that I had two separate "addons" sections
in travis.yml.  I know, silly!)

GNU All-Permissive License.

[![Build Status](https://travis-ci.org/sajith/gmp-on-travis.svg)](https://travis-ci.org/sajith/gmp-on-travis)
