// 函数: sub_45d954
// 地址: 0x45d954
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
EndPaint(sub_45f888(arg1[-1]), &arg1[-0x15])
DeleteDC(arg1[-2])
BOOL result = DeleteObject(arg1[-3])
*arg1
return result
