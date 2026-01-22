// 函数: sub_4433b0
// 地址: 0x4433b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
int32_t var_20 = 0
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = (*(*arg1 + 0x44))(ExceptionList, var_34, var_30)
uint32_t eax_1 = zx.d(*(arg1 + 0x25a))
RECT var_1c
int32_t var_8

if (eax_1.b != 0)
    int32_t* var_c_1 = &var_4
    sub_443378(eax_1, edx)
    int32_t* var_c_2 = var_c_1
    var_1c.bottom = arg1[0x97]
    sub_4426e8(var_8, &var_1c, arg1[0x94], var_1c.bottom)

void* edx_4

if (sub_465ac4(sub_4659bc()) == 0 || (*(arg1 + 0x52) & 4) == 0)
    int32_t eax_7 = arg1[0x1c]
    int32_t var_c_3 = eax_7
    var_1c.bottom = arg1[0x98]
    edx_4 = sub_4426e8(eax_7, &var_1c, arg1[0x94], var_1c.bottom)
else
    int32_t dy = neg.d(arg1[0x98])
    arg1[0x98]
    var_1c.bottom = dy
    var_1c.right = &var_1c
    edx_4 = InflateRect(var_1c.right, var_1c.bottom, dy)

uint32_t eax_10 = zx.d(*(arg1 + 0x259))

if (eax_10.b != 0)
    int32_t* var_c_5 = &var_4
    sub_443378(eax_10, edx_4)
    int32_t* var_c_6 = var_c_5
    var_1c.bottom = arg1[0x97]
    sub_4426e8(var_8, &var_1c, arg1[0x94], var_1c.bottom)

int32_t* esi_1 = arg1[0x94]
char eax_15 = sub_465ac4(sub_4659bc())
char eax_17

if (eax_15 != 0)
    eax_17 = sub_460cac(arg1)

if (eax_15 == 0 || eax_17 == 0)
    sub_42bbb0(esi_1[5], arg1[0x1c])
    sub_42c258(esi_1, &var_1c)

sub_42bcec(esi_1[5], 1)
arg1[0x1a]
sub_42c630(esi_1)
enum DRAW_TEXT_FORMAT format
int32_t ecx_4
format, ecx_4 = sub_45a198(arg1, 
    *((zx.d(*(arg1 + 0x269)) << 2) + &data_4ab510) | 0x60
        | *((zx.d(arg1[0x9a].b) << 2) + &data_4ab504))
var_1c.bottom = &var_1c
var_1c.right = 0xffffffff
sub_4577d8(ecx_4, &var_20)
var_1c.top = sub_405018(var_20)
var_1c.left = sub_42c73c(esi_1)
DrawTextA(var_1c.left, var_1c.top, var_1c.right, var_1c.bottom, format)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_443536
int32_t* result = &var_20
sub_404b88(result)
return result
