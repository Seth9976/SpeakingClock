// 函数: sub_458e74
// 地址: 0x458e74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = *arg2

if (eax == 0xc)
    void* eax_7 = sub_409ec0(arg2[2])
    sub_409eec(*(arg1 + 0x64))
    *(arg1 + 0x64) = eax_7
    return sub_45736c(arg2[1], *arg2, arg1, arg2[2])

void* result

if (eax == 0xd)
    char* eax_3 = *(arg1 + 0x64)
    char* edi_1
    
    edi_1 = eax_3 == 0 ? &data_458ef8 : eax_3
    
    char* eax_4 = arg2[2]
    sub_409cd8(eax_4, edi_1, arg2[1] - 1)
    result = sub_409c4c(eax_4)
    arg2[3] = result
else
    result = eax - 0xe
    
    if (eax == 0xe)
        char* edi_2 = *(arg1 + 0x64)
        
        if (edi_2 != 0)
            result = sub_409c4c(edi_2)
            arg2[3] = result
        else
            result = nullptr
            arg2[3] = 0

return result
