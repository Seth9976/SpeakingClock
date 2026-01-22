// 函数: sub_4635a4
// 地址: 0x4635a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0)
    return 

int32_t* eax = arg2[2]

if (eax != 0)
    int32_t __saved_ebp
    int32_t* var_10_1 = &__saved_ebp
    sub_463570(eax, arg2)

void* eax_1 = arg2[6]

if (eax_1 == 0)
    void* eax_2 = arg2[5]
    
    if (eax_2 != 0)
        *(eax_2 + 8) = arg2[3]
else
    *(eax_1 + 0xc) = arg2[3]

void* eax_3 = arg2[3]

if (eax_3 != 0)
    *(eax_3 + 0x18) = arg2[6]

if (arg2 == *(arg1 + 0x64))
    *(arg1 + 0x64) = 0

sub_403c68(arg2)
