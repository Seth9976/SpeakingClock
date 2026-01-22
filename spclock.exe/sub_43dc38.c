// 函数: sub_43dc38
// 地址: 0x43dc38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
BOOL result
void* edx
int32_t edx_1
result, edx_1 = sub_45d738(arg1, edx)

if (*(arg1 + 0x195) == 0)
    return result

edx_1.b = 1
int32_t* eax_1 = sub_42bd40(sub_45171c+0x240, edx_1)
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_45607c(eax_1, arg1)
(*(*arg1 + 0x44))(ExceptionList, var_3c, var_38)
sub_42bbb0(eax_1[5], arg1[0x1c])
RECT var_18
sub_42c294(eax_1, &var_18)
var_18.bottom = 0xffffffff
var_18.right = 0xffffffff
var_18.top = &var_18
InflateRect(var_18.top, var_18.right, var_18.bottom)
sub_42c294(eax_1, &var_18)

if (*(arg1 + 0x195) != 0)
    int32_t esi_1 = 0
    
    if (*(arg1 + 0x193) != 0)
        esi_1 = arg1[0x66]
    
    if (arg1[0x65].b != 0)
        esi_1 += arg1[0x66]
    
    if (esi_1 == 0)
        (*(*arg1 + 0x44))(eax_1)
        sub_42bbb0(eax_1[5], arg1[0x1c])
        sub_42c294(eax_1, &var_18)
        var_18.bottom = 0xffffffff
        var_18.right = 0xffffffff
        var_18.top = &var_18
        InflateRect(var_18.top, var_18.right, var_18.bottom)
        sub_42c294(eax_1, &var_18)
    
    (*(*arg1 + 0x44))(eax_1)
    int32_t var_28
    sub_4570f0(arg1, &var_28)
    var_18.bottom = 0xfffffff0
    var_18.right = sub_42c73c(eax_1)
    int32_t eax_17 = GetWindowLongA(var_18.right, var_18.bottom)
    
    if ((*(arg1 + 0x192) & 1) != 0)
        var_28 -= esi_1
    
    int32_t var_24
    
    if ((*(arg1 + 0x192) & 2) != 0)
        int32_t var_24_1 = var_24 - esi_1
    int32_t var_20
    
    if ((*(arg1 + 0x192) & 4) != 0)
        var_20 += esi_1
    
    if ((eax_17 & 0x200000) != 0)
        var_18.bottom = 0x14
        int32_t var_20_1 = var_20 + GetSystemMetrics(var_18.bottom)
    
    int32_t var_1c
    
    if ((*(arg1 + 0x192) & 8) != 0)
        var_1c += esi_1
    
    if ((eax_17 & 0x100000) != 0)
        var_18.bottom = 0x15
        int32_t var_1c_1 = var_1c + GetSystemMetrics(var_18.bottom)
    
    var_18.bottom = zx.d(*(arg1 + 0x192)) | *((zx.d(*(arg1 + 0x195)) << 2) + &data_4ab044)
        | *((zx.d(*(arg1 + 0x1d9)) << 2) + &data_4ab054) | 0x2000
    var_18.right =
        *((zx.d(*(arg1 + 0x193)) << 2) + &data_4ab024) | *((zx.d(arg1[0x65].b) << 2) + &data_4ab034)
    var_18.top = &var_18
    var_18.left = sub_42c73c(eax_1)
    DrawEdge(var_18.left, var_18.top, var_18.right, var_18.bottom)
    var_18.bottom = 0xa
    int32_t eax_29 = GetSystemMetrics(var_18.bottom)
    var_18.left = var_18.right - eax_29
    
    if (*(arg1 + 0x2be) != 1)
        if (sub_43c094(arg1) == 0)
            var_18.bottom = 0x4005
            var_18.right = 3
            var_18.top = &var_18
            var_18.left = sub_42c73c(eax_1)
            DrawFrameControl(var_18.left, var_18.top, var_18.right, var_18.bottom)
        else
            var_18.bottom = 0x4005
            var_18.right = 3
            var_18.top = &var_18
            var_18.left = sub_42c73c(eax_1)
            DrawFrameControl(var_18.left, var_18.top, var_18.right, var_18.bottom)

fsbase->NtTib.ExceptionList = eax_1
__return_addr = &data_43de6b
return sub_403c68(eax_1)
