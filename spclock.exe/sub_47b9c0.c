// 函数: sub_47b9c0
// 地址: 0x47b9c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ebx = arg2

if (arg1[0x66] == 0)
    ebx = 0

if (ebx == arg1[0x68].b || (arg1[0x68].b != 0 && *(arg1 + 0x1a2) == 0))
    return 

arg1[0x68].b = ebx

if (ebx == 0)
    *(arg1 + 0x1b2) = 0
    (*(*arg1 + 0x84))()
else
    if (*(arg1 + 0x1b2) == 0)
        (*(*arg1 + 0x80))()
    
    *(arg1 + 0x1b2) = 3

if (ebx != 0)
    sub_47b988(arg1)
