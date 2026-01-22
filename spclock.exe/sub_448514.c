// 函数: sub_448514
// 地址: 0x448514
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_78 = ebx
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi
int32_t var_74 = 0
char* var_70 = nullptr
char* var_6c = nullptr
void* var_68 = nullptr
char var_9 = arg2.b
int32_t* var_84 = &var_4
int32_t (* var_88)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*data_4ac2fc
arg2.b = 1
int32_t* eax = sub_448028(sub_447ea4+0x48, arg2)
*(*data_4ac2fc + 0x34)
(*(*eax + 0x74))(ExceptionList, var_88, var_84)
sub_46f3d4(eax, 3)
void* eax_6 = sub_46f7b0(eax)
eax[0x1a]
sub_42c630(eax_6)
*(eax + 0x275) = 1
sub_46fcfc(eax, 0)
eax[0x83] = eax
eax[0x82] = sub_4480b8
uint8_t* nNumerator_1
sub_447e4c(sub_46f7b0(eax), &nNumerator_1)
uint8_t* nNumerator = nNumerator_1
int32_t var_14 = 8
int32_t var_1c = MulDiv(var_14, nNumerator, 4)
int32_t eax_13 = MulDiv(8, var_14, 8)
int32_t eax_14 = MulDiv(0xa, nNumerator, 4)
int32_t eax_15 = MulDiv(0xa, var_14, 8)
int32_t var_14_4 = 0x32
int32_t var_2c = MulDiv(var_14_4, nNumerator, 4)
int32_t ebx_1 = 0
void* esi_2 = &data_4b1bc4
void** var_50 = &data_4ab698
int32_t lprc
int32_t var_5c

do
    bool c_1 = ebx_1.b u< 0xf
    
    if (ebx_1.b == 0xf || c_1)
        c_1 = test_bit(arg3.d, ebx_1 & 0x7f)
    
    if (c_1)
        if (*esi_2 == 0)
            int32_t* var_10_6 = &lprc
            sub_418a64(0, 0, 0, var_10_6, 0)
            enum DRAW_TEXT_FORMAT format = sub_45a1d8(var_10_6) | 0x420
            int32_t* lprc_1 = &lprc
            var_14_4 = 0xffffffff
            sub_406a30(*var_50, &var_68)
            nNumerator_1 = sub_405018(var_68)
            DrawTextA(sub_42c73c(sub_46f7b0(lprc_1)), nNumerator_1, var_14_4, lprc_1, format)
            *esi_2 = var_5c - lprc + 8
        
        int32_t eax_31 = *esi_2
        
        if (eax_31 s> var_2c)
            var_2c = eax_31
    
    ebx_1 += 1
    var_50 = &var_50[1]
    esi_2 += 4
while (ebx_1.b != 0xb)

int32_t eax_33 = MulDiv(0xe, var_14_4, 8)
int32_t eax_35 = MulDiv(4, nNumerator_1, 4)
int32_t yBottom = 0
*data_4ac4b8
int32_t eax_38 = sub_4740a8()
int32_t xRight = eax_38 s>> 1
bool c_2 = unimplemented  {sar eax, 0x1}

if (eax_38 s>> 1 s< 0)
    xRight = adc.d(xRight, 0, c_2)

int32_t yTop = 0
nNumerator_1 = nullptr
SetRect(&lprc, nNumerator_1, yTop, xRight, yBottom)
HDC hdc = sub_42c73c(sub_46f7b0(xRight))
int32_t ebx_2 = arg1

if (ebx_2 != 0)
    ebx_2 = *(ebx_2 - 4)

enum DRAW_TEXT_FORMAT format_1 = sub_45a1d8(xRight) | 0x450
RECT* lprc_2 = &lprc
nNumerator_1 = sub_405018(arg1)
DrawTextA(hdc, nNumerator_1, ebx_2 + 1, lprc_2, format_1)
PSTR lpIconName = *((zx.d(var_9) << 2) + &data_4ab658)
int32_t esi_4 = var_5c
int32_t var_58
int32_t var_38 = var_58

if (lpIconName != 0)
    esi_4 += eax_14 + 0x20
    
    if (var_38 s< 0x20)
        var_38 = 0x20

int32_t eax_49 = 0
int32_t ebx_5 = 0

do
    bool c_3 = ebx_5.b u< 0xf
    
    if (ebx_5.b == 0xf || c_3)
        c_3 = test_bit(arg3.d, ebx_5 & 0x7f)
    
    if (c_3)
        eax_49 += 1
    
    ebx_5 += 1
while (ebx_5.b != 0xb)

int32_t ebx_6 = 0

if (eax_49 != 0)
    ebx_6 = var_2c * eax_49 + (eax_49 - 1) * eax_35

int32_t eax_52

eax_52 = ebx_6 s>= esi_4 ? ebx_6 : esi_4

sub_46e528(lprc_2, hdc * 2 + eax_52)
sub_46e55c(lprc_2, var_38 + eax_33 + eax_15 + eax_13 * 2)
*data_4ac4b8
int32_t eax_59 = sub_4740a8()
int32_t edx_17 = eax_59 s>> 1
bool c_4 = unimplemented  {sar edx, 0x1}

if (eax_59 s>> 1 s< 0)
    edx_17 = adc.d(edx_17, 0, c_4)

int32_t eax_61 = lprc_2->__offset(0x48).d
int32_t eax_62 = eax_61 s>> 1
bool c_5 = unimplemented  {sar eax, 0x1}

if (eax_61 s>> 1 s< 0)
    eax_62 = adc.d(eax_62, 0, c_5)

sub_4738d4(lprc_2, edx_17 - eax_62)
*data_4ac4b8
int32_t eax_66 = sub_47409c()
int32_t edx_20 = eax_66 s>> 1
bool c_6 = unimplemented  {sar edx, 0x1}

if (eax_66 s>> 1 s< 0)
    edx_20 = adc.d(edx_20, 0, c_6)

int32_t eax_68 = lprc_2->__offset(0x4c).d
int32_t eax_69 = eax_68 s>> 1
bool c_7 = unimplemented  {sar eax, 0x1}

if (eax_68 s>> 1 s< 0)
    eax_69 = adc.d(eax_69, 0, c_7)

sub_473910(lprc_2, edx_20.w - eax_69.w)
int32_t edx_24
void* ebp_1

if (var_9 == 4)
    sub_4765cc(*data_4ac2fc, &var_70)
    edx_24, ebp_1 = sub_457808(lprc_2, var_70)
else
    sub_406a30((&data_4ab644)[zx.d(var_9)], &var_6c)
    edx_24, ebp_1 = sub_457808(lprc_2, var_6c)

if (lpIconName != 0)
    *(ebp_1 - 0xc)
    edx_24.b = 1
    *(ebp_1 - 0x48) = sub_44281c(sub_441305+0x3b, edx_24)
    (*(**(ebp_1 - 0x48) + 0x18))(arg1)
    *(ebp_1 - 0xc)
    (*(**(ebp_1 - 0x48) + 0x6c))()
    HICON eax_80 = LoadIconA(nullptr, lpIconName)
    ebp_1 = sub_432720(sub_42e65c(*(*(ebp_1 - 0x48) + 0x198)), eax_80)
    *(ebp_1 - 0x1c)
    *(ebp_1 - 0x18)
    (*(**(ebp_1 - 0x48) + 0x88))(0x20, 0x20)

*(ebp_1 - 0xc)
edx_24.b = 1
*(*(ebp_1 - 0xc) + 0x360) = sub_439d88(sub_4348e6+0x242, edx_24)
int32_t* edi_2 = *(*(ebp_1 - 0xc) + 0x360)
(*(*edi_2 + 0x18))(arg1)
*(ebp_1 - 0xc)
(*(*edi_2 + 0x6c))()
sub_43a754(edi_2, 1)
int32_t ebx_9
void* ebp_2
int32_t esi_5
ebx_9, ebp_2, esi_5 = sub_457808(edi_2, *(ebp_1 - 4))
sub_457110(edi_2, ebp_2 - 0x60)
*(*(ebp_2 - 0xc) + 0x5f)
(*(*edi_2 + 0x74))()
*(ebp_2 - 0x3c) = esi_5 - *(ebp_2 - 0x58) + *(ebp_2 - 0x18)
int32_t esi_7
esi_7.w = 0xffc7

if (sub_403e64(edi_2, esi_7) != 0)
    *(ebp_2 - 0x3c) = sub_45714c(*(ebp_2 - 0xc)) - *(ebp_2 - 0x3c) - edi_2[0x12]

*(ebp_2 - 0x1c)
*(ebp_2 - 0x3c)
(*(*edi_2 + 0x88))(*(ebp_2 - 0x54), *(ebp_2 - 0x58))

if ((*(ebp_2 - 7) & 8) != 0)
    *(ebp_2 - 0x3d) = 3
else if ((*(ebp_2 - 7) & 2) == 0)
    *(ebp_2 - 0x3d) = 2
else
    *(ebp_2 - 0x3d) = 1

int32_t eax_104
int32_t edx_39
eax_104, edx_39 = sub_45714c(*(ebp_2 - 0xc))
int32_t eax_105 = eax_104 - ebx_9
int32_t eax_106 = eax_105 s>> 1
bool c_8 = unimplemented  {sar eax, 0x1}

if (eax_105 s>> 1 s< 0)
    eax_106 = adc.d(eax_106, 0, c_8)

*(ebp_2 - 0x38) = eax_106
int32_t ebx_10 = 0
*(ebp_2 - 0x4c) = &data_4ab66c
void** esi_9 = &data_4ab698
*(ebp_2 - 0x50) = &data_4ab6c4

do
    bool c_9 = ebx_10.b u< 0xf
    
    if (ebx_10.b == 0xf || c_9)
        c_9 = test_bit(*(ebp_2 - 7), ebx_10 & 0x7f)
    
    if (c_9)
        *(ebp_2 - 0xc)
        edx_39.b = 1
        *(ebp_2 - 0x44) = sub_43e144(sub_4372df+0x2d, edx_39)
        **(ebp_2 - 0x4c)
        (*(**(ebp_2 - 0x44) + 0x18))()
        *(ebp_2 - 0xc)
        (*(**(ebp_2 - 0x44) + 0x6c))()
        sub_406a30(*esi_9, ebp_2 - 0x70)
        ebx_10, ebp_2, esi_9 = sub_457808(*(ebp_2 - 0x44), *(ebp_2 - 0x70))
        *(*(ebp_2 - 0x44) + 0x25c) = **(ebp_2 - 0x50)
        
        if (ebx_10.b == *(ebp_2 + 8))
            void* edx_44
            edx_44.b = 1
            sub_43e228(*(ebp_2 - 0x44), edx_44.b)
            ebx_10, ebp_2 = sub_470d84(*(ebp_2 - 0xc), *(ebp_2 - 0x44))
        
        if (ebx_10.b == *(ebp_2 - 0x3d))
            *(*(ebp_2 - 0x44) + 0x259) = 1
        
        *(ebp_2 - 0x34) + *(ebp_2 - 0x1c)
        *(ebp_2 - 0x24)
        *(ebp_2 - 0x38)
        (*(**(ebp_2 - 0x44) + 0x88))(*(ebp_2 - 0x2c), *(ebp_2 - 0x28))
        *(ebp_2 - 0x38) += *(ebp_2 - 0x28) + *(ebp_2 - 0x30)
        
        if (ebx_10.b == 0xa)
            void* eax_125 = *(ebp_2 - 0x44)
            *(eax_125 + 0x114) = *(ebp_2 - 0xc)
            *(eax_125 + 0x110) = sub_4480a0
    
    ebx_10 += 1
    *(ebp_2 - 0x50) += 4
    esi_9 = &esi_9[1]
    *(ebp_2 - 0x4c) += 4
while (ebx_10.b != 0xb)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_448a90
return sub_404bac(ebp_2 - 0x70, 4)
