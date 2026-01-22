// 函数: sub_443378
// 地址: 0x443378
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg2 - 4) = 0xff000014

if (arg1.b == 1)
    *(arg2 - 4) = 0xff000010

*(arg2 - 8) = 0xff000010

if (arg1.b == 1)
    *(arg2 - 8) = 0xff000014
