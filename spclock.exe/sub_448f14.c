// 函数: sub_448f14
// 地址: 0x448f14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_11c = ebx
int32_t esi
int32_t var_120 = esi
int32_t edi
int32_t var_124 = edi
int32_t var_110
__builtin_memset(&var_110, 0, 0x1c)
void* var_8 = nullptr
int32_t var_1c
sub_405608(&var_1c, sub_448c20)
int32_t* var_128 = &var_4
int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t var_a4
sub_403578(&var_a4, 0x60, 0)
void var_f4
sub_403578(&var_f4, 0x50, 0)
int32_t var_34 = 0
int32_t* var_134 = &var_4
int32_t (* var_138)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
var_a4 = 0x60
int32_t* ebx_1 = *(*data_4ac4b8 + 0x6c)
HWND var_a0

if (ebx_1 == 0)
    HWND eax_9 = sub_4783e0(*data_4ac2fc)
    var_a0 = eax_9
    
    if (eax_9 == 0)
        var_a0 = sub_445160()
else
    var_a0 = sub_45f888(ebx_1)

int32_t var_98 = 8

if (sub_475aec(*data_4ac2fc) != 0)
    int32_t var_98_1 = var_98 | 0x2000

int32_t var_8c = *((zx.d(arg3) << 2) + &data_4ab6f0)
int32_t ebx_3 = 0
void** edi_1 = &data_4ab698
void* esi_1 = &data_4ab704

do
    bool c_1 = ebx_3.b u< 0xf
    
    if (ebx_3.b == 0xf || c_1)
        c_1 = test_bit(arg9, ebx_3 & 0x7f)
    
    if (c_1)
        sub_406a30(*edi_1, &var_8)
        void* eax_21 = var_8
        
        if (eax_21 != 0)
            eax_21 = *(eax_21 - 4)
        
        (&var_4)[var_34 * 2 - 0x3c] = *esi_1
        int16_t* eax_27
        int32_t ecx
        eax_27, ecx = CoTaskMemAlloc(eax_21 * 2 + 2)
        sub_4054c8(ecx, var_8)
        int32_t var_f8
        sub_43ff30(eax_27, var_f8, eax_21)
        (&var_4)[var_34 * 2 - 0x3b] = eax_27
        var_34 += 1
    
    ebx_3 += 1
    esi_1 += 4
    edi_1 = &edi_1[1]
while (ebx_3.b != 0xb)

int32_t var_80 = var_34
void* var_7c = &var_f4
int32_t var_78 = *((zx.d(arg4) << 2) + &data_4ab6c4)
int32_t ecx_3

if (arg3 == 4)
    uint8_t* var_108
    ecx_3 = sub_4054c8(sub_4765cc(*data_4ac2fc, &var_108), var_108)
    int32_t var_104
    int32_t var_90_1 = sub_4054d8(var_104)
else
    uint8_t* var_100
    ecx_3 = sub_4054c8(sub_406a30((&data_4ab644)[zx.d(arg3)], &var_100), var_100)
    int32_t var_fc
    int32_t var_90 = sub_4054d8(var_fc)

int32_t ecx_5 = sub_4054c8(ecx_3, arg1)
int32_t var_10c
int32_t var_88 = sub_4054d8(var_10c)
sub_4054c8(ecx_5, arg2)
int32_t var_84 = sub_4054d8(var_110)

if (arg7 s>= 0 || arg6 s>= 0 || arg8 != 0)
    var_1c = arg8
    void* var_18
    sub_404c20(&var_18, arg5)
    HWND var_14_1 = var_a0
    int32_t var_118
    sub_418a3c(arg7, arg6, &var_118)
    int32_t var_10_1 = var_118
    int32_t var_114
    int32_t var_c_1 = var_114
    int32_t* var_4c_1 = &var_1c
    struct _EXCEPTION_REGISTRATION_RECORD** (* var_50_1)(HWND arg1, int32_t arg2, int32_t arg3, 
        void* arg4) = sub_448dec

int32_t eax_54
void* ebp_1
eax_54, ebp_1 = sub_46ba88(sub_4783e0(*data_4ac2fc))
*(ebp_1 - 0x34) = eax_54
*(ebp_1 - 0x38) = sub_46b8e0()
void* var_140_3 = ebp_1
int32_t (* var_144)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4269fc(0, ebp_1 - 0x28, ebp_1 - 0xa0, 0)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_140_4)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5, int32_t arg6, int32_t arg7) = sub_449250
sub_46bb4c(*(ebp_1 - 0x34))
SetActiveWindow(*(ebp_1 - 0x3c))
int32_t result = *(ebp_1 - 0x38)
sub_46b8e8(result)
return result
