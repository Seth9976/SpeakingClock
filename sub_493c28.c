// 函数: sub_493c28
// 地址: 0x493c28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int64_t* var_c = nullptr
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24
struct _EXCEPTION_REGISTRATION_RECORD** esp

if (sub_4937e4(arg1, &var_24) != 0)
    if (sub_430cd8(arg3) != sub_430cd8(arg1))
        sub_431d30(arg3, sub_430cd8(arg1))
    
    int32_t var_48_1 = var_24
    sub_405e6c()
    int32_t var_48_2 = var_24
    sub_405e6c()
    esp = &ExceptionList
    int32_t eax_15 = arg2[3] - arg2[1] - 1
    
    if (eax_15 s>= 0)
        int32_t i_1 = eax_15 + 1
        int32_t var_20_1 = 0
        int32_t i
        
        do
            int64_t* ebx_2 = sub_4936f0(sub_430d5c(arg1, arg2[1] + var_20_1), *arg2 * var_24)
            int64_t* esi_1 =
                sub_4936f0(sub_430d5c(arg1, arg2[1] + var_20_1), (arg2[2] - var_24) * var_24)
            int64_t* edi_1 = sub_4936f0(sub_430d5c(arg3, arg4[1] + var_20_1), *arg4 * var_24)
            int64_t* var_1c_1 = sub_4936f0(sub_430d5c(arg3, arg4[1] + var_20_1), 
                (arg2[2] - *arg2 + *arg4 - var_24) * var_24)
            int32_t eax_31 = arg2[2] - *arg2
            int32_t j_2 = eax_31 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_31 s>> 1 s< 0)
                j_2 = adc.d(j_2, 0, c_1)
            
            if (j_2 - 1 s>= 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    sub_4936f8(sub_405cb8(), var_8, ebx_2, var_24)
                    sub_4936f8(sub_405cb8(), var_c, esi_1, var_24)
                    int32_t eax_42 = var_24
                    sub_405cb8()
                    sub_493708(var_1c_1, var_8, eax_42)
                    int32_t eax_46 = var_24
                    sub_405cb8()
                    sub_493708(edi_1, var_c, eax_46)
                    esp = &ExceptionList
                    ebx_2 = sub_4936f0(ebx_2, var_24)
                    esi_1 = sub_4936f0(esi_1, neg.d(var_24))
                    edi_1 = sub_4936f0(edi_1, var_24)
                    var_1c_1 = sub_4936f0(var_1c_1, neg.d(var_24))
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            var_20_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    (*(*arg3 + 8))()
    esp = &var_8

fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_493e75
int32_t* result = &var_c
sub_405724(result, 0x493c0c, 2)
return result
