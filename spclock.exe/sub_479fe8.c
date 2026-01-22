// 函数: sub_479fe8
// 地址: 0x479fe8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_479f74(arg1)
int32_t result = (*(**(arg1 + 4) + 8))()

if (arg2 != 0)
    result = (*(*arg2 + 0x20))()
    
    if (result s> 0)
        *(arg1 + 0x1c) = sub_430dc4(arg2)
        int32_t eax_6 = (*(*arg2 + 0x2c))()
        int32_t eax_8 = (*(*arg2 + 0x20))(eax_6)
        int32_t eax_10
        int32_t edx_6
        edx_6:eax_10 = sx.q(eax_6)
        result = divs.dp.d(edx_6:eax_10, eax_8)
        
        if (mods.dp.d(edx_6:eax_10, eax_8) == 0)
            int32_t eax_12 = (*(*arg2 + 0x2c))()
            int32_t eax_17 = divs.dp.d(sx.q(eax_12), (*(*arg2 + 0x20))(eax_12))
            
            if (eax_17 s> 4)
                eax_17 = 1
            
            return sub_47a060(arg1, eax_17.b)

return result
