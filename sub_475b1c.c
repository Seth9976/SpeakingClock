// 函数: sub_475b1c
// 地址: 0x475b1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t eax = *arg2

if (eax == data_4b1cec || eax == 0x1a)
    if (*(arg1 + 0x59) != 0)
        SetThreadLocale(0x400)
        sub_40df14()
    
    if (*(arg1 + 0x5a) != 0)
        result = sub_4746b0(data_4b1ce4)
    
    if (*arg2 == data_4b1cec)
        sub_474d30(data_4b1ce4)
        
        if (sub_478b08() != 0)
            int32_t ecx_1
            ecx_1.b = 1
            sub_46b93c(*(arg1 + 0x30), 1, ecx_1)
            int32_t ecx_2
            ecx_2.b = 1
            sub_46b93c(*(arg1 + 0x30), 0, ecx_2)

return result
