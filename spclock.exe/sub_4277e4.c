// 函数: sub_4277e4
// 地址: 0x4277e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_edx
int32_t __saved_edx_2 = __saved_edx
int32_t edi
int32_t var_20 = edi
int32_t var_8 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = (**arg1)(&var_8, 0, ExceptionList, var_28, var_24)

if (var_8 == 0)
    int32_t var_10_4 = 0
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_427953
    int32_t* eax_32 = &var_8
    sub_404b88(eax_32)
    return eax_32

int32_t* ExceptionList_1

if (sub_403df4(arg2, &data_41806c) == 0)
    ExceptionList_1 = sub_403c38(ecx, sub_417fa7+0x5a)
else
    ExceptionList_1 = arg2

int32_t* __saved_ecx = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t eax_7 = sub_41c874(ExceptionList_1)
int32_t edi_1 = var_8

if (edi_1 != 0)
    *(edi_1 - 4)

(**ExceptionList_1)()
unimplemented  {sar ebx, 0x1}
(*(*ExceptionList_1 + 4))()
int32_t ebx_6 = edi_1

if (ebx_6 != 0)
    ebx_6 = *(ebx_6 - 4)

int32_t eax_12
int32_t __saved_ecx_5
eax_12, __saved_ecx_5 = sub_41c874(ExceptionList_1)
int32_t __saved_ecx_1 = __saved_ecx_5
void* eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(ExceptionList_1[1])
char* eax_18 = sub_405018(var_8)
int32_t ecx_3 = ebx_6 s>> 1
bool c_2 = unimplemented  {sar ecx, 0x1}

if (ebx_6 s>> 1 s< 0)
    ecx_3 = adc.d(ecx_3, 0, c_2)

sub_422a60(eax_18, eax_15 + eax_12, ecx_3)
int32_t eax_20
int32_t edx_6
edx_6:eax_20 = sx.q(eax_7)
sub_41c894(ExceptionList_1, eax_20, edx_6)

if (arg2 != ExceptionList_1)
    int32_t ecx_4 = edi_1
    
    if (ecx_4 != 0)
        ecx_4 = *(ecx_4 - 4)
    
    int32_t eax_24 = ecx_4 s>> 1
    bool c_3 = unimplemented  {sar eax, 0x1}
    
    if (ecx_4 s>> 1 s< 0)
        eax_24 = adc.d(eax_24, 0, c_3)
    
    int32_t eax_25
    int32_t __saved_ecx_6
    __saved_ecx_6:eax_25 = sx.q(eax_24)
    int32_t __saved_ecx_4 = __saved_ecx_6
    int32_t var_10_3 = eax_25
    ebp_1 = sub_41cb10(arg2, ExceptionList_1, ecx_4)

ebp_1[-3] = (**ebp_1[-4])() - eax_7
fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_427936
int32_t eax_30 = ebp_1[2]

if (eax_30 == ebp_1[-4])
    return eax_30

return sub_403c68(ebp_1[-4])
