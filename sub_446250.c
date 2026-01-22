// 函数: sub_446250
// 地址: 0x446250
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_7c = ebx
int32_t esi
int32_t var_80 = esi
int32_t var_8 = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t* var_84 = &var_4
int32_t (* var_88)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (*data_4ac120 s>= 6 && data_4ab520 != 0 && arg1[0x12] == 0 && *(arg1 + 0xb2) == 0
        && *(arg1 + 0x52) == 0 && *(arg1 + 0x5a) == 0)
    int32_t* var_20
    
    if (GetOpenFileNameA != arg2)
        arg2.b = 1
        var_20 = sub_445894(sub_445760+0x118, arg2, arg1)
    else
        arg2.b = 1
        var_20 = sub_445894(sub_445760+0xb0, arg2, arg1)
    
    int32_t* var_90 = &var_4
    int32_t (* var_94)(void* arg1, void* arg2) = j_sub_40443c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = sub_445ae0(var_20, arg3)
    char temp0 = eax_4.b
    eax_4.b = neg.b(eax_4.b)
    int32_t var_1c = sbb.d(eax_4, eax_4, temp0 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_90_1 = 0x4465e3
    return sub_403c68(var_20)

(*(*arg1[0x21] + 0x44))()
int32_t var_78
sub_403578(&var_78, 0x58, 0)

if ((*data_4ac120 s< 5 || *data_4ac4d0 != 2)
        && (*data_4ac4d0 != 1 || *data_4ac120 s< 4 || *data_4ac358 s< 0x5a))
    var_78 = 0x4c
else
    var_78 = 0x58

int32_t var_70 = data_4af7f4
sub_4461f8(arg1[0x1a], &var_8)
int32_t var_6c = sub_405018(var_8)
int32_t eax_19 = arg1[0x1b]
int32_t var_60 = eax_19
arg1[0x1c] = eax_19
void* const var_58

if ((arg1[0x19].b & 0x40) == 0)
    var_58 = 0x104
else
    var_58 = 0xffef

sub_4052a8(&var_c, var_58 + 2)
int16_t* eax_22 = sub_405018(var_c)
sub_403578(eax_22, var_58 + 2, 0)
sub_409cd8(eax_22, sub_405018(arg1[0x20]), var_58)

if (arg1[0x1d] != 0 || data_4ab51c == 0)
    int32_t var_4c_1 = sub_405018(arg1[0x1d])
else
    void* const var_4c = &data_446610

int32_t var_48 = sub_405018(arg1[0x1e])
int32_t var_44 = 0x20
int32_t var_24 = 0
int32_t eax_31 = 0
void* esi_2 = &data_4ab584

do
    bool c_2 = eax_31.b u< 0x1f
    
    if (eax_31.b == 0x1f || c_2)
        c_2 = test_bit(arg1[0x19], eax_31 & 0x7f)
    
    if (c_2)
        var_44 |= *esi_2
    
    eax_31 += 1
    esi_2 += 4
while (eax_31.b != 0x16)

int32_t var_44_1

if (*data_4ac1d0 == 0)
    var_44_1 = var_44 & 0xfff7ffff
else
    var_44_1 = var_44 ^ 0x80000
    
    if (*data_4ac120 s>= 5 && *data_4ac4d0 == 2)
    label_44649e:
        int32_t eax_38 = 0
        void* esi_3 = &data_4ab5dc
        
        do
            bool c_3 = eax_38.b u< 7
            
            if (eax_38.b == 7 || c_3)
                c_3 = test_bit(arg1[0x2e], eax_38 & 0x7f)
            
            if (c_3)
                var_24 |= *esi_3
            
            eax_38 += 1
            esi_3 += 4
        while (eax_38.b != 1)
    else if (*data_4ac4d0 == 1 && *data_4ac120 s>= 4 && *data_4ac358 s>= 0x5a)
        goto label_44649e

sub_404c20(&var_10, arg1[0x1f])

if (var_10 == 0 && (var_44_1:2.b & 8) == 0)
    sub_409b54(arg1[0x20], &var_10)
    sub_4050c0(&var_10, 1, 1)

if (var_10 != 0)
    int32_t var_3c_1 = sub_405018(var_10)

if ((*(arg1 + 0x66) & 1) != 0 || *data_4ac1d0 == 0)
    int32_t (__stdcall* var_34)(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4) = sub_44524c
else
    int32_t (__stdcall* var_34_1)(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4) = sub_445e84

int32_t eax_45 = arg1[0x12]

if (eax_45 != 0)
    int32_t var_44_2 = var_44_1 | 0x40
    int32_t var_30_1 = eax_45
    int32_t eax_46 = arg1[0x13]
    
    if (eax_46 != 0)
        int32_t var_70_1 = eax_46

if (*(*data_4ac2fc + 0xd4) == 0)
    int32_t var_74_1 = sub_445160()
else
    int32_t edx_16
    edx_16.b = 1
    int64_t** eax_49
    eax_49, ebp_1 = sub_45a640(&data_445300, edx_16)
    arg1[0x10] = eax_49
    eax_49[0x94] = arg1
    eax_49[0x95] = ebp_1[-5]
    ebp_1[-0x1c] = sub_45f888(arg1[0x10])

ebp_1[-4]
ebp_1[-6] = (*(*arg1 + 0x38))()

if (ebp_1[-6] != 0)
    sub_446778(arg1, &ebp_1[-0x1d])
    
    if ((*(ebp_1 - 0x3f) & 4) == 0)
        arg1[0x19] &= 0xffffff7f
    else
        arg1[0x19] |= 0x80
    
    if ((ebp_1[-0x10].b & 1) == 0)
        arg1[0x19] &= 0xfffffffe
    else
        arg1[0x19] |= 1
    
    arg1[0x1b] = ebp_1[-0x17]

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_446605
return sub_404bac(&ebp_1[-3], 3)
