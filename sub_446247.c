// 函数: sub_446247
// 地址: 0x446247
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t ebx
int32_t var_78 = ebx
int32_t esi
int32_t var_7c = esi
*(arg4 - 4) = 0
*(arg4 - 8) = 0
*(arg4 - 0xc) = 0
*(arg4 - 0x14) = arg3
*(arg4 - 0x10) = arg2
void* var_80 = arg4
int32_t (* var_84)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (*data_4ac120 s>= 6 && data_4ab520 != 0 && *(arg1 + 0x48) == 0 && *(arg1 + 0xb2) == 0
        && *(arg1 + 0x52) == 0 && *(arg1 + 0x5a) == 0)
    if (GetOpenFileNameA != *(arg4 - 0x10))
        arg2.b = 1
        *(arg4 - 0x1c) = sub_445894(sub_445760+0x118, arg2, arg1)
    else
        arg2.b = 1
        *(arg4 - 0x1c) = sub_445894(sub_445760+0xb0, arg2, arg1)
    
    void* var_8c = arg4
    int32_t (* var_90)(void* arg1, void* arg2) = j_sub_40443c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = sub_445ae0(*(arg4 - 0x1c), *(arg4 - 0x14))
    char temp0_1 = eax_4.b
    eax_4.b = neg.b(eax_4.b)
    *(arg4 - 0x18) = sbb.d(eax_4, eax_4, temp0_1 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_8c_1 = 0x4465e3
    return sub_403c68(*(arg4 - 0x1c))

(*(**(arg1 + 0x84) + 0x44))()
sub_403578(arg4 - 0x74, 0x58, 0)

if ((*data_4ac120 s< 5 || *data_4ac4d0 != 2)
        && (*data_4ac4d0 != 1 || *data_4ac120 s< 4 || *data_4ac358 s< 0x5a))
    *(arg4 - 0x74) = 0x4c
else
    *(arg4 - 0x74) = 0x58

*(arg4 - 0x6c) = data_4af7f4
sub_4461f8(*(arg1 + 0x68), arg4 - 4)
*(arg4 - 0x68) = sub_405018(*(arg4 - 4))
int32_t eax_19 = *(arg1 + 0x6c)
*(arg4 - 0x5c) = eax_19
*(arg1 + 0x70) = eax_19

if ((arg1[0x64] & 0x40) == 0)
    *(arg4 - 0x54) = 0x104
else
    *(arg4 - 0x54) = 0xffef

sub_4052a8(arg4 - 8, *(arg4 - 0x54) + 2)
int16_t* eax_22 = sub_405018(*(arg4 - 8))
*(arg4 - 0x58) = eax_22
sub_403578(eax_22, *(arg4 - 0x54) + 2, 0)
char* eax_25 = sub_405018(*(arg1 + 0x80))
sub_409cd8(*(arg4 - 0x58), eax_25, *(arg4 - 0x54))

if (*(arg1 + 0x74) != 0 || data_4ab51c == 0)
    *(arg4 - 0x48) = sub_405018(*(arg1 + 0x74))
else
    *(arg4 - 0x48) = &data_446610

*(arg4 - 0x44) = sub_405018(*(arg1 + 0x78))
*(arg4 - 0x40) = 0x20
*(arg4 - 0x20) = 0
int32_t eax_31 = 0
void* esi_2 = &data_4ab584

do
    bool c_2 = eax_31.b u< 0x1f
    
    if (eax_31.b == 0x1f || c_2)
        c_2 = test_bit(*(arg1 + 0x64), eax_31 & 0x7f)
    
    if (c_2)
        *(arg4 - 0x40) |= *esi_2
    
    eax_31 += 1
    esi_2 += 4
while (eax_31.b != 0x16)

if (*data_4ac1d0 == 0)
    *(arg4 - 0x40) &= 0xfff7ffff
else
    *(arg4 - 0x40) ^= 0x80000
    
    if (*data_4ac120 s>= 5 && *data_4ac4d0 == 2)
    label_44649e:
        int32_t eax_38 = 0
        void* esi_3 = &data_4ab5dc
        
        do
            bool c_3 = eax_38.b u< 7
            
            if (eax_38.b == 7 || c_3)
                c_3 = test_bit(*(arg1 + 0xb8), eax_38 & 0x7f)
            
            if (c_3)
                *(arg4 - 0x20) |= *esi_3
            
            eax_38 += 1
            esi_3 += 4
        while (eax_38.b != 1)
    else if (*data_4ac4d0 == 1 && *data_4ac120 s>= 4 && *data_4ac358 s>= 0x5a)
        goto label_44649e

sub_404c20(arg4 - 0xc, *(arg1 + 0x7c))

if (*(arg4 - 0xc) == 0 && (*(arg4 - 0x3e) & 8) == 0)
    sub_409b54(*(arg1 + 0x80), arg4 - 0xc)
    sub_4050c0(arg4 - 0xc, 1, 1)

if (*(arg4 - 0xc) != 0)
    *(arg4 - 0x38) = sub_405018(*(arg4 - 0xc))

if ((arg1[0x66] & 1) != 0 || *data_4ac1d0 == 0)
    *(arg4 - 0x30) = sub_44524c
else
    *(arg4 - 0x30) = sub_445e84

int32_t eax_45 = *(arg1 + 0x48)

if (eax_45 != 0)
    *(arg4 - 0x40) |= 0x40
    *(arg4 - 0x2c) = eax_45
    int32_t eax_46 = *(arg1 + 0x4c)
    
    if (eax_46 != 0)
        *(arg4 - 0x6c) = eax_46

if (*(*data_4ac2fc + 0xd4) == 0)
    *(arg4 - 0x70) = sub_445160()
else
    int32_t edx_16
    edx_16.b = 1
    int64_t** eax_49
    eax_49, arg4 = sub_45a640(&data_445300, edx_16)
    *(arg1 + 0x40) = eax_49
    eax_49[0x94] = arg1
    eax_49[0x95] = *(arg4 - 0x14)
    *(arg4 - 0x70) = sub_45f888(*(arg1 + 0x40))

*(arg4 - 0x10)
*(arg4 - 0x18) = (*(*arg1 + 0x38))()

if (*(arg4 - 0x18) != 0)
    sub_446778(arg1, arg4 - 0x74)
    
    if ((*(arg4 - 0x3f) & 4) == 0)
        *(arg1 + 0x64) &= 0xffffff7f
    else
        *(arg1 + 0x64) |= 0x80
    
    if ((*(arg4 - 0x40) & 1) == 0)
        *(arg1 + 0x64) &= 0xfffffffe
    else
        *(arg1 + 0x64) |= 1
    
    *(arg1 + 0x6c) = *(arg4 - 0x5c)

int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_446605
return sub_404bac(arg4 - 0xc, 3)
