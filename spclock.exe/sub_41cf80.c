// 函数: sub_41cf80
// 地址: 0x41cf80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = *(arg1 + 0xc)

if (edi s>= 0 && arg3 s>= 0)
    void* const result = *(arg1 + 8) - edi
    
    if (result s> 0)
        if (arg3 s< result)
            result = arg3
        
        sub_4030d0(*(arg1 + 4) + edi, arg2, result)
        *(arg1 + 0xc) += result
        return result

return nullptr
