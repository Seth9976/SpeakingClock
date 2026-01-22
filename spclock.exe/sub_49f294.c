// 函数: sub_49f294
// 地址: 0x49f294
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = arg3
int32_t* ebp = arg2
int32_t eax = *ebp

if (eax == 5)
    if (ebp[1] == 1 && arg1[0x30].b != 0)
        int32_t esi
        esi.w = 0xffe7
        sub_403e64(arg1, esi)
else if (eax == 0x47)
    if (*(arg1 + 0xe2) != 0)
        void* eax_7 = *(*data_4ac2fc + 0x44)
        
        if (eax_7 != 0)
            data_4ac2fc
            
            if (*(eax_7 + 0x277) == 2)
                var_14.b = 1
                
                if (*(arg1 + 0x6a) != 0)
                    arg1[0x1b]
                    arg1[0x1a](var_14)
            
            *(arg1 + 0xe2) = 0
else if (eax == 0x112 && ebp[1] == 0xf120)
    BOOL eax_12 = *(*data_4ac2fc + 0x44)
    
    if (*(eax_12 + 0x273) == 1)
        sub_46fed0(eax_12, 0)
    
    arg2.b = 1
    sub_46e590(*(*data_4ac2fc + 0x44), arg2.b)

if (*ebp == data_4b1db8 && arg1[0xf].b != 0)
    (*(*arg1 + 0x34))(var_14)

return 0
