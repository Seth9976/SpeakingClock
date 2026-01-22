// 函数: sub_40ad78
// 地址: 0x40ad78
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((zx.d(arg1) & 3) == 0)
    uint32_t ebx_1 = zx.d(arg1)
    
    if (modu.dp.d(0:ebx_1, 0x64) != 0 || modu.dp.d(0:ebx_1, 0x190) == 0)
        uint32_t result
        result.b = 1
        return result

return 0
