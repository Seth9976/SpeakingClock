// 函数: sub_45efb4
// 地址: 0x45efb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi
void* ebp = arg2
char var_14 = 1

if ((arg1[7].b & 0x10) != 0)
label_45f031:
    
    if (sub_4542bc(0xb016, zx.d(*(ebp + 4)), *(ebp + 8)) == 0)
        var_14 = 0
else
    for (int32_t* i = arg1; i != 0; i = i[0xc])
        esi.w = 0xffd6
        int32_t* eax_2
        eax_2, arg2 = sub_403e64(i, esi)
        
        if (eax_2 != 0 && eax_2[0xe] != 0)
            esi.w = 0xffee
            char eax_4
            eax_4, arg2 = sub_403e64(eax_2, esi, ebp)
            
            if (eax_4 != 0)
                return zx.d(var_14)
    
    arg2.b = 1
    int32_t* eax_6 = sub_46bf14(arg1)
    
    if (eax_6 == 0)
        goto label_45f031
    
    esi.w = 0xffa5
    
    if (sub_403e64(eax_6, esi, ebp) == 0)
        goto label_45f031

return zx.d(var_14)
