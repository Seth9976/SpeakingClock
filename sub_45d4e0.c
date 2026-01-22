// 函数: sub_45d4e0
// 地址: 0x45d4e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
arg1[0x15].w |= 0x80
int32_t var_10 = SaveDC(arg2)
int32_t* var_2c_1 = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_455ddc(arg2, arg3, arg4)
IntersectClipRect(arg2, 0, 0, arg1[0x12], arg1[0x13])
enum DRAW_EDGE_FLAGS grfFlags = 0
enum DRAWEDGE_FLAGS edge = 0

if ((GetWindowLongA(sub_45f888(arg1), 0xffffffec):1.b & 2) == 0)
    if ((GetWindowLongA(sub_45f888(arg1), 0xfffffff0) & 0x800000) != 0)
        edge = BDR_OUTER
        grfFlags = 0xa00f
else
    edge = BDR_SUNKEN
    grfFlags = 0x200f

char eax_16

if (edge == BDR_SUNKEN)
    eax_16 = sub_465ac4(sub_4659bc())

int32_t var_20

if (edge == BDR_SUNKEN && eax_16 != 0)
    if ((arg1[7].b & 0x10) != 0)
        sub_465964(arg1)
    
    SetRect(&var_20, 0, 0, arg1[0x12], arg1[0x13])
    
    if ((*(arg1 + 0x52) & 2) == 0)
        arg1[0x14] |= 0x20000
        ebp_1 = sub_45d430(arg2, &var_20)
        *(ebp_1[-1] + 0x50) &= 0xfffdffff
    else
        ebp_1 = sub_45d430(arg2, &var_20)
    
    sub_455ddc(ebp_1[-2], ebp_1[-7], ebp_1[-6])
    IntersectClipRect(ebp_1[-2], 0, 0, ebp_1[-5] - ebp_1[-7], ebp_1[-4] - ebp_1[-6])
else if (grfFlags != 0)
    SetRect(&var_20, 0, 0, arg1[0x12], arg1[0x13])
    DrawEdge(arg2, &var_20, edge, grfFlags)
    int32_t var_1c
    sub_455ddc(arg2, var_20, var_1c)
    int32_t var_18
    int32_t var_14
    IntersectClipRect(arg2, 0, 0, var_18 - var_20, var_14 - var_1c)
ebp_1[-2]
sub_458ac8(ebp_1[-1], 0)
ebp_1[-2]
sub_458ac8(ebp_1[-1], 0)
void* eax_51 = *(ebp_1[-1] + 0x1d0)

if (eax_51 != 0)
    int32_t ebx_3 = *(eax_51 + 8) - 1
    
    if (ebx_3 s>= 0)
        int32_t i_1 = ebx_3 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            void* eax_54 = sub_41a0f4(*(ebp_1[-1] + 0x1d0), esi_1)
            
            if (*(eax_54 + 0x57) != 0)
                *(eax_54 + 0x40)
                ebp_1[-2]
                sub_45d4e0(*(eax_54 + 0x44))
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
void* (__stdcall* var_2c_2)(int32_t* arg1 @ ebp, int32_t arg2) = sub_45d720
int32_t nSavedDC = ebp_1[-3]
ExceptionList = ebp_1[-2]
return RestoreDC(ExceptionList, nSavedDC)
