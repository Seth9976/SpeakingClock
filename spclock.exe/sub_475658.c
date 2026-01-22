// 函数: sub_475658
// 地址: 0x475658
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1ce0 != 0 && GetWindow(arg1, GW_OWNER) == *(data_4b1ce0 + 0x30))
    if ((GetWindowLongA(arg1, 0xffffffec) & 8) == 0)
        *arg2 = arg1
        return 0
    
    int32_t* edi_1 = *(data_4b1ce0 + 0x44)
    
    if (edi_1 != 0 && arg2[1].b == 0 && arg1 == sub_45f888(edi_1))
        *arg2 = arg1
        return 0
    
    sub_419f9c(*(data_4b1ce0 + 0x90), arg1)

return 0xffffffff
