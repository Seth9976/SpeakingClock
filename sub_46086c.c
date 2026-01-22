// 函数: sub_46086c
// 地址: 0x46086c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_44 = ebx
int32_t esi
int32_t var_48 = esi
int32_t edi
int32_t var_4c = edi

if (*(arg1 + 0x195) == 0 && arg1[0x67] u<= 0)
    (*(*arg1 - 0x10))()
    int32_t* result = sub_46665c(arg1)
    
    if (result.b != 0)
        result = arg1
        
        if ((*(result + 0x52) & 2) != 0)
            result, ebp_1 = sub_4664d4(sub_4659bc(), arg1, 0)
    
    *ebp_1
    return result

HDC hdc = GetWindowDC(sub_45f888(arg1))
int32_t* var_50_1 = &var_4
int32_t (* var_54)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20
GetClientRect(sub_45f888(arg1), &var_20)
int32_t var_30
GetWindowRect(sub_45f888(arg1), &var_30)
MapWindowPoints(nullptr, sub_45f888(arg1), &var_30, 2)
int32_t top
OffsetRect(&var_20, neg.d(var_30), neg.d(top))
int32_t top_1
int32_t right_1
int32_t bottom_1
ExcludeClipRect(hdc, var_20, top_1, right_1, bottom_1)
int32_t var_40 = var_30
int32_t var_3c
int32_t* edi_1 = &var_3c
int32_t* esi_1 = &top
*edi_1 = *esi_1
void* edi_2 = &edi_1[1]
void* esi_2 = &esi_1[1]
*edi_2 = *esi_2
*(edi_2 + 4) = *(esi_2 + 4)
int32_t eax_20 = arg1[0x67]
InflateRect(&var_20, eax_20, eax_20)
var_30 = var_20
int32_t* edi_5 = &top
int32_t* esi_5 = &top_1
*edi_5 = *esi_5
void* edi_6 = &edi_5[1]
void* esi_6 = &esi_5[1]
*edi_6 = *esi_6
*(edi_6 + 4) = *(esi_6 + 4)
int32_t eax_23 = GetWindowLongA(sub_45f888(arg1), 0xfffffff0)
int32_t right

if ((eax_23 & 0x200000) != 0)
    right += (*data_4ac140)(0x14)

int32_t bottom

if ((eax_23 & 0x100000) != 0)
    int32_t eax_29 = (*data_4ac140)(0x15)
    bottom += eax_29

if (*(arg1 + 0x195) != 0)
    int32_t esi_9 = 0
    uint32_t edx = zx.d(*(arg1 + 0x193))
    
    if (edx.b != 0)
        esi_9 = arg1[0x66]
    
    uint32_t eax_34 = zx.d(arg1[0x65].b)
    
    if (eax_34.b != 0)
        esi_9 += arg1[0x66]
    
    if ((*(arg1 + 0x192) & 1) != 0)
        var_30 -= esi_9
    
    if ((*(arg1 + 0x192) & 2) != 0)
        top -= esi_9
    
    if ((*(arg1 + 0x192) & 4) != 0)
        right += esi_9
    
    if ((*(arg1 + 0x192) & 8) != 0)
        bottom += esi_9
    
    DrawEdge(hdc, &var_30, 
        *(((edx & 0x7f) << 2) + &data_4ab930) | *(((eax_34 & 0x7f) << 2) + &data_4ab940), 
        zx.d(*(arg1 + 0x192)) | *((zx.d(*(arg1 + 0x195)) << 2) + &data_4ab950)
            | *((zx.d(*(arg1 + 0x1d9)) << 2) + &data_4ab960) | 0x2000)

IntersectClipRect(hdc, var_30, top, right, bottom)
var_30 = var_40
int32_t* edi_9 = &top
int32_t* esi_10 = &var_3c
*edi_9 = *esi_10
void* edi_10 = &edi_9[1]
void* esi_11 = &esi_10[1]
*edi_10 = *esi_11
*(edi_10 + 4) = *(esi_11 + 4)
HRGN hrgn = *(arg2 + 4)

if (hrgn != 1)
    GetRgnBox(hrgn, &var_20)
    MapWindowPoints(nullptr, sub_45f888(arg1), &var_20, 2)
    IntersectRect(&var_30, &var_30, &var_20)
    OffsetRect(&var_30, neg.d(var_40), neg.d(var_3c))
else
    OffsetRect(&var_30, neg.d(var_30), neg.d(top))

HBRUSH hbr
void* ebp_2
hbr, ebp_2 = sub_42bc04(arg1[0x69])
FillRect(*(ebp_2 - 0xc), ebp_2 - 0x2c, hbr)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_50_2 = 0x460b26
HDC hDC = *(ebp_2 - 0xc)
ExceptionList = sub_45f888(*(ebp_2 - 4))
return ReleaseDC(ExceptionList, hDC)
