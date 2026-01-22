// 函数: sub_493a2c
// 地址: 0x493a2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_44 = ebx
int32_t esi
int32_t var_48 = esi
int32_t edi
int32_t var_4c = edi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int64_t* var_c = nullptr
int32_t var_40 = *arg2
int32_t var_3c
int32_t* edi_1 = &var_3c
void* esi_2 = &arg2[1]
*edi_1 = *esi_2
void* edi_2 = &edi_1[1]
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t* var_50 = &var_4
int32_t (* var_54)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
struct _EXCEPTION_REGISTRATION_RECORD** esp

if (sub_4937e4(arg1, &var_2c) != 0)
    if (sub_430cd8(arg3) != sub_430cd8(arg1))
        sub_431d30(arg3, sub_430cd8(arg1))
    
    int32_t var_34
    int32_t var_34_1 = var_34 - 2
    int32_t edx_4 = var_34_1 - var_3c
    int32_t var_38
    int32_t esi_7 = (var_38 - var_40) * var_2c
    int32_t var_5c_1 = esi_7
    sub_405e6c()
    int32_t var_5c_2 = esi_7
    sub_405e6c()
    esp = &ExceptionList
    int32_t eax_13 = edx_4 s>> 1
    bool c_1 = unimplemented  {sar eax, 0x1}
    
    if (edx_4 s>> 1 s< 0)
        eax_13 = adc.d(eax_13, 0, c_1)
    
    if (eax_13 s>= 0)
        int32_t i_1 = eax_13 + 1
        int32_t ebx_2 = 0
        int32_t i
        
        do
            int64_t* eax_17 = sub_4936f0(sub_430d5c(arg1, var_3c + ebx_2), var_40 * var_2c)
            int64_t* eax_20 = sub_4936f0(sub_430d5c(arg1, var_34_1 - ebx_2), var_40 * var_2c)
            int64_t* eax_23 = sub_4936f0(sub_430d5c(arg3, arg4[1] + ebx_2), *arg4 * var_2c)
            int64_t* eax_26 = sub_4936f0(sub_430d5c(arg3, arg4[1] + edx_4 - ebx_2), *arg4 * var_2c)
            sub_4936f8(sub_405cb8(), var_8, eax_17, esi_7)
            sub_4936f8(sub_405cb8(), var_c, eax_20, esi_7)
            sub_405cb8()
            sub_493708(eax_26, var_8, esi_7)
            sub_405cb8()
            sub_493708(eax_23, var_c, esi_7)
            esp = &ExceptionList
            ebx_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    (*(*arg3 + 8))()
    esp = &var_8

fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_493bfe
int32_t* result = &var_c
sub_405724(result, 0x493a10, 2)
return result
