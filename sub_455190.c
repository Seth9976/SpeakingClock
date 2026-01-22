// 函数: sub_455190
// 地址: 0x455190
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t lpdwProcessId = arg3
int32_t result = 0

if (arg1 != 0 && GetWindowThreadProcessId(arg1, &lpdwProcessId) != 0
        && GetCurrentProcessId() == lpdwProcessId)
    uint16_t eax_4
    uint32_t ecx
    int32_t edx
    eax_4, ecx, edx = GlobalFindAtomA(sub_405018(data_4b1c58))
    
    if (eax_4 != data_4b1c54)
        result.b = sub_4541fc(arg1, edx, ecx) != 0
    else
        result.b = GetPropA(arg1, zx.d(data_4b1c54)) != 0

return result
