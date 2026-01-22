// 函数: sub_48dc9c
// 地址: 0x48dc9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_20 = *arg8
void var_1c
void* edi = &var_1c
void* esi_1 = &arg8[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
int32_t var_30

if ((arg7.w & 1) != 1)
    int32_t* var_40_4 = &var_20
    ExceptionList = arg5
    int32_t eax_26
    int32_t* ebp_2
    eax_26, ebp_2 = sub_48df58(arg1, arg2, arg3, &var_30, arg4, 0, ExceptionList, arg7, var_40_4)
    *ebp_2
    return eax_26

HRGN hrgn_1

if (arg6 != 0)
    int32_t y2 = zx.d(sub_40795c(arg6)) + arg2[3]
    int32_t x2 = zx.d(arg6.w) + arg2[2]
    ExceptionList = zx.d(sub_40795c(arg6)) + arg2[1]
    hrgn_1 = CreateRectRgn(zx.d(arg6.w) + *arg2, ExceptionList, x2, y2)
else
    hrgn_1 = CreateRectRgnIndirect(arg2)

int32_t* var_40_2 = &var_4
int32_t (* var_44_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
SelectClipRgn(sub_42c73c(arg3), hrgn_1)
void* ebp_1 = sub_48df58(arg1, arg2, arg3, &var_30, arg4, 0, arg5, arg7, &var_20)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_40_3 = 0x48dd9f
enum GDI_REGION_TYPE eax_20 = DeleteObject(*(ebp_1 - 0xc))

if (eax_20 == RGN_ERROR)
    return eax_20

HRGN hrgn = nullptr
ExceptionList = sub_42c73c(*(ebp_1 - 4))
return SelectClipRgn(ExceptionList, hrgn)
