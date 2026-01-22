// 函数: sub_41cb10
// 地址: 0x41cb10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t* esp = &var_28
int32_t arg_4

if (arg3 == 0 && arg_4 == 0)
    sub_41c894(arg2, 0, 0)
    int32_t eax_2
    int32_t edx_1
    eax_2, edx_1 = (**arg2)()
    esp = &arg_4
    arg_4 = eax_2
    arg3 = edx_1

int32_t var_14 = arg_4
int32_t var_10 = arg3
int32_t var_18

if (arg3 != 0)
    if (arg3 s<= 0)
        var_18 = arg_4
    else
        var_18 = 0xf000
else if (arg_4 u<= 0xf000)
    var_18 = arg_4
else
    var_18 = 0xf000

int32_t eax_7 = sub_402ea8(var_18)
*(esp - 4) = &var_4
*(esp - 8) = j_sub_40443c
TEB* fsbase
*(esp - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp - 0xc

while (arg3 != 0 || arg_4 != 0)
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q(var_18)
    int32_t ebx_1
    
    if (edx_2 != arg3)
        if (edx_2 s>= arg3)
            ebx_1 = arg_4
        else
            ebx_1 = var_18
    else if (eax_9 u>= arg_4)
        ebx_1 = arg_4
    else
        ebx_1 = var_18
    
    sub_41caa0(arg2, eax_7, ebx_1)
    sub_41cad8(arg1, eax_7, ebx_1)
    int32_t eax_13
    int32_t edx_5
    edx_5:eax_13 = sx.q(ebx_1)
    int32_t temp2_1 = arg_4
    arg_4 -= eax_13
    arg3 = sbb.d(arg3, edx_5, temp2_1 u< eax_13)

*(esp - 4)
fsbase->NtTib.ExceptionList = *(esp - 0xc)
*(esp - 4) = sub_41cbf3
return sub_402ec4(eax_7)
