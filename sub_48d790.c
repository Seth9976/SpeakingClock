// 函数: sub_48d790
// 地址: 0x48d790
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
var_8:3.b = arg1.b
int16_t esi = arg3 | 0x2000
int32_t* eax
HDC hdc = sub_42c73c(eax)

switch (zx.d(var_8:3.b))
    case 1
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0x1003)
        DrawEdge(hdc, arg2, BDR_RAISEDOUTER, BF_BOTTOMRIGHT)
    case 2
        DrawEdge(hdc, arg2, BDR_SUNKEN, zx.d(esi) | 0x100f)
    case 3
        DrawEdge(hdc, arg2, BDR_RAISED, zx.d(esi) | 0x100f)
    case 4
        DrawEdge(hdc, arg2, BDR_RAISEDOUTER, zx.d(esi) | 0x100f)
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, 0x200c)
    case 5
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0xf)
        DrawEdge(hdc, arg2, BDR_SUNKENINNER, zx.d(esi) | 3)
    case 6
        DrawEdge(hdc, arg2, BDR_RAISEDOUTER, zx.d(esi) | 0x100f)
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, 0x200c)
        arg2->top += 1
        arg2->left += 1
    case 7
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0xf)
        DrawEdge(hdc, arg2, BDR_SUNKENINNER, 0x2003)
        arg2->right -= 1
        arg2->bottom -= 1
    case 8
        DrawEdge(hdc, arg2, EDGE_ETCHED, zx.d(esi) | 0xf)
    case 9
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, zx.d(esi) | 0xf)
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0xf)
    case 0xa
        DrawEdge(hdc, arg2, BDR_RAISEDOUTER, zx.d(esi) | 0xc)
        arg2->top += 1
        arg2->left += 1
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, zx.d(esi) | 0xf)
    case 0xb
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, zx.d(esi) | 0xf)
    case 0xc
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0xf)
    case 0xd
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, zx.d(esi) | 0xf)
        DrawEdge(hdc, arg2, BDR_RAISEDINNER, zx.d(esi) | 0xf)
    case 0xe
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0xf)
        DrawEdge(hdc, arg2, BDR_SUNKENOUTER, zx.d(esi) | 0xf)

uint32_t result
result.b = 1
return result
