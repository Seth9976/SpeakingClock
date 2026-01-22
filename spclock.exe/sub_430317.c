// 函数: sub_430317
// 地址: 0x430317
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
SelectObject(arg1[-7], arg1[-5])
fsbase->NtTib.ExceptionList = arg3
fsbase->NtTib.ExceptionList = arg5
DeleteDC(arg1[-7])
ReleaseDC(nullptr, arg1[-6])

if (arg1[-4] != 0)
    GetObjectA(arg1[-4], 0x54, arg1[3])

*arg1
return arg1[-4]
