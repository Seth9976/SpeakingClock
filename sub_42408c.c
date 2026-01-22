// 函数: sub_42408c
// 地址: 0x42408c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t* arg_8
sub_4065c4(arg_8)
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t var_8 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t* var_48 = &var_4
int32_t (* var_4c)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t i_2

if (arg3 != 0)
    if (arg3 s<= 0)
        i_2 = arg2
    else
        i_2 = 0x100000
else if (arg2 u<= 0x100000)
    i_2 = arg2
else
    i_2 = 0x100000

int32_t eax_3 = sub_402ea8(i_2)
int32_t* var_54 = &var_4
int32_t (* var_58)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

while (true)
    if (arg3 != 0)
        if (arg3 s<= 0)
            break
    else if (arg2 u<= 0)
        break
    
    int32_t i
    
    if (arg3 != 0)
        if (arg3 s<= 0)
            i = arg2
        else
            i = 0x7fffffff
    else if (arg2 u<= 0x7fffffff)
        i = arg2
    else
        i = 0x7fffffff
    
    if (i s> 0)
        do
            if (i s<= i_2)
                int32_t i_1 = i
            else
                i_1 = i_2
            
            int32_t eax_7 = (*(**(arg1 + 0xc) + 0xc))()
            
            if (eax_7 == 0)
                sub_4045c8(ExceptionList, var_58)
                fsbase->NtTib.ExceptionList = ExceptionList_1
            label_42426e:
                fsbase->NtTib.ExceptionList = ExceptionList_2
                int32_t var_3c_1 = 0x424286
                int32_t** eax_22 = &arg_8
                sub_406550(eax_22)
                return eax_22
            
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = sx.q(eax_7)
            int32_t temp3_1 = var_1c
            var_1c += eax_9
            var_18 = adc.d(var_18, edx_3, temp3_1 + eax_9 u< temp3_1)
            int32_t var_2c = 0
            int32_t var_28_1 = 0
            int32_t* eax_11 = arg_8
            int32_t var_8_1 = (*(*eax_11 + 0x10))(eax_11, eax_3, eax_7, &var_2c)
            int32_t eax_14 = var_2c
            int32_t temp4_1 = var_24
            var_24 += eax_14
            var_20 = adc.d(var_20, var_28_1, temp4_1 + eax_14 u< temp4_1)
            
            if (var_8_1 == 0 && eax_7 != var_2c)
                var_8_1 = 0x80004005
            
            if (var_8_1 != 0)
                sub_4045c8(ExceptionList, var_58)
                fsbase->NtTib.ExceptionList = ExceptionList_1
                goto label_42426e
            
            i -= eax_7
            int32_t eax_17
            int32_t edx_6
            edx_6:eax_17 = sx.q(eax_7)
            int32_t temp5_1 = arg2
            arg2 -= eax_17
            arg3 = sbb.d(arg3, edx_6, temp5_1 u< eax_17)
        while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_54_1 = 0x42424e
sub_402ec4(eax_3)

if (arg5 != 0)
    *arg5 = var_24
    arg5[1] = var_20

int32_t* eax_21 = arg4

if (eax_21 != 0)
    eax_21 = arg4
    *eax_21 = var_1c
    eax_21[1] = var_18

return eax_21
