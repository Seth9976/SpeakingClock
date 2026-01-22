// 函数: sub_4a57b0
// 地址: 0x4a57b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx
edx.b = 1
int32_t* eax = sub_46d398(sub_4a1d50+0x48, edx)
*(arg1 + 0x44a) = 1
SetForegroundWindow(sub_45f888(arg1))
sub_4430a8(eax[0xd9], arg1[0x10d])
(*(*eax + 0xfc))()
sub_443098(eax[0xd9], 0)
BOOL result = sub_472f50(eax)
*(arg1 + 0x44a) = 0
*(arg1 + 0x44b) = 1
return result
