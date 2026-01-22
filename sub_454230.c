// 函数: sub_454230
// 地址: 0x454230
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t lpdwProcessId = arg3

if (arg1 != 0 && GetWindowThreadProcessId(arg1, &lpdwProcessId) != 0
        && GetCurrentProcessId() == lpdwProcessId)
    uint16_t eax_4
    uint32_t ecx
    int32_t edx
    eax_4, ecx, edx = GlobalFindAtomA(sub_405018(data_4b1c5c))
    
    if (eax_4 != data_4b1c56)
        return sub_4541fc(arg1, edx, ecx)
    
    return GetPropA(arg1, zx.d(data_4b1c56))

return nullptr
