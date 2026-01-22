// 函数: sub_4827e8
// 地址: 0x4827e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
char* var_10 = nullptr
int32_t* edi_1 = arg2
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
edi_1[3] = 0
int32_t* eax_1 = *(edi_1[1] + 0x40)
int32_t i_1 = sub_482404(arg1) - 1

if (i_1 s>= 0)
    i_1 += 1
    int32_t ebx = 0
    int32_t i
    
    do
        if (sub_4823ec(arg1, ebx) == eax_1[0xc])
            sub_481ae4(sub_4823ec(arg1, ebx), sub_482404(arg1) - 1)
            fsbase->NtTib.ExceptionList = ExceptionList_2
            int32_t var_20_1 = 0x48297d
            int32_t* eax_28 = &var_10
            sub_404b88(eax_28)
            return eax_28
        
        ebx += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2.b = 1
int32_t* eax_11
int32_t ecx_1
eax_11, ecx_1 = sub_4818d8(&data_47d1f4, arg2)
*(arg1 + 0x2b8) = eax_11
int32_t* var_2c_1 = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* var_38 = &var_4
int32_t (* var_3c)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_403df4(eax_1, 0x46a11c) != 0)
    sub_4577d8(ecx_1, &var_10)
    ebp_1, i_1 = sub_457808(eax_11, var_10)

sub_481ab0(*(ebp_1[-1] + 0x2b8), ebp_1[-1])
i_1.w = 0xffcc
sub_403e64(ebp_1[-2], i_1, ebp_1[-1], edi_1[1] + 0x4c)
int32_t entry_ebx
fsbase->NtTib.ExceptionList = entry_ebx
char ebx_2 = *(ebp_1[-2] + 0x57)
int32_t* ecx_4 = sub_481bbc(*(ebp_1[-1] + 0x2b8), ebx_2)

if (ebx_2 != 0)
    ecx_4, ebp_1 = sub_4825a0(ebp_1[-1], *(ebp_1[-1] + 0x2b8), ecx_4)

sub_456b54(ebp_1[-2], true, ecx_4)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_482960
void* eax_27 = ebp_1[-1]
*(eax_27 + 0x2b8) = 0
return eax_27
