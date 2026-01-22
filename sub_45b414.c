// 函数: sub_45b414
// 地址: 0x45b414
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char edx
char var_9 = edx
int32_t result
int32_t ecx
int32_t edx_1
result, ecx, edx_1 = sub_45b7f4(arg1)

if (result == 0)
    return result

edx_1.b = 1
int32_t var_10 = sub_403c38(ecx, edx_1)
sub_45b310(arg1)
int32_t* var_c = &var_4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
fsbase->NtTib.ExceptionList = &__saved_ebx
int32_t edi_1 = sub_45b7f4(arg1) - 1

if (edi_1 s>= 0)
    int32_t i_1 = edi_1 + 1
    int32_t ebx_1 = 0
    int32_t i
    
    do
        if (*(sub_45b7b8(arg1, ebx_1) + 0x5b) - 3 u< 2)
            sub_419f9c(j_sub_40443c, sub_45b7b8(arg1, ebx_1))
        
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t esi
esi.w = 0xffbf
sub_403e64(arg1, esi)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_45b509

while (true)
    int32_t* eax_12
    int32_t ecx_2
    eax_12, ecx_2 = sub_41a0f4(j_sub_40443c, 0x7400fb7c)
    
    if (*(eax_12 + 0x5b) != 3)
        sub_456b54(eax_12, true, ecx_2)
    else
        sub_456b54(eax_12, true, ecx_2)
    
    sub_419fe8(j_sub_40443c, 0x7400fb7c)
