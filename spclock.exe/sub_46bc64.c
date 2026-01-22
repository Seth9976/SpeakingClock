// 函数: sub_46bc64
// 地址: 0x46bc64
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t lpdwProcessId = arg1
int32_t result = 0xffffffff
GetWindowThreadProcessId(arg2, &lpdwProcessId)

if (arg2 == *arg3 && GetCurrentProcessId() == lpdwProcessId)
    result = 0
    arg3[1].b = 1

return result
