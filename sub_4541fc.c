// 函数: sub_4541fc
// 地址: 0x4541fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t lpdwProcessId = arg3

if (GetWindowThreadProcessId(arg1, &lpdwProcessId) != 0 && GetCurrentProcessId() == lpdwProcessId)
    return SendMessageA(arg1, data_4b1c60, 0, 0)

return 0
