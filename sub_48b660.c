// 函数: sub_48b660
// 地址: 0x48b660
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0x13].b == 0 && sub_48b854(arg1) != 0 && sub_403df4(arg1[1], 0x4529a0) != 0)
    if (*(arg1 + 0x4d) u<= 1 || *(arg1 + 0x61) != 0)
        void* eax_8 = arg1[1]
        *(eax_8 + 0x38) = arg1[0x14]
        *(eax_8 + 0x3c) = arg1[0x15]
    else
        SetWindowLongA(sub_48b704(arg1), 0xfffffffc, arg1[0x16])
        void* eax_7 = arg1[0x17]
        
        if (eax_7 != 0)
            sub_424aac(eax_7)
        
        arg1[0x17] = 0
        arg1[0x16] = 0

arg1[0x14] = 0
arg1[0x15] = 0

if (*(arg1 + 0x4a) != 0 && *(arg1 + 0x4b) != 0)
    int32_t* var_8_2 = arg1
    sub_476b18(*data_4ac2fc, *(*arg1 + 0x34))
    *(arg1 + 0x4b) = 0

arg1[0x13].b = 0
arg1[0x18].b = 0
LRESULT result
result.b = 1
return result
