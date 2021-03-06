#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleSeg_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","new",0x72728fff,"zpp_nape.geom.ZPP_SimpleSeg.new","zpp_nape/geom/Simple.hx",289,0x62f156db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(331)
	this->node = null();
	HX_STACK_LINE(330)
	this->prev = null();
	HX_STACK_LINE(294)
	this->next = null();
	HX_STACK_LINE(293)
	this->id = (int)0;
	HX_STACK_LINE(292)
	this->vertices = null();
	HX_STACK_LINE(291)
	this->right = null();
	HX_STACK_LINE(290)
	this->left = null();
	HX_STACK_LINE(336)
	int _g = ::zpp_nape::ZPP_ID_obj::ZPP_SimpleSeg();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(336)
	this->id = _g;
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(338)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(339)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert _g1 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(339)
			this->vertices = _g1;
		}
		else{
			HX_STACK_LINE(345)
			this->vertices = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(346)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = this->vertices->next;
			HX_STACK_LINE(347)
			this->vertices->next = null();
		}
		HX_STACK_LINE(352)
		Dynamic();
	}
	HX_STACK_LINE(354)
	this->vertices->lt = this->less_xy_dyn();
}
;
	return null();
}

//ZPP_SimpleSeg_obj::~ZPP_SimpleSeg_obj() { }

Dynamic ZPP_SimpleSeg_obj::__CreateEmpty() { return  new ZPP_SimpleSeg_obj; }
hx::ObjectPtr< ZPP_SimpleSeg_obj > ZPP_SimpleSeg_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleSeg_obj > result = new ZPP_SimpleSeg_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimpleSeg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleSeg_obj > result = new ZPP_SimpleSeg_obj();
	result->__construct();
	return result;}

Void ZPP_SimpleSeg_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","free",0xac8b882d,"zpp_nape.geom.ZPP_SimpleSeg.free","zpp_nape/geom/Simple.hx",321,0x62f156db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		::zpp_nape::geom::ZPP_SimpleVert _g = this->right = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(322)
		this->left = _g;
		HX_STACK_LINE(323)
		this->prev = null();
		HX_STACK_LINE(324)
		this->node = null();
		HX_STACK_LINE(325)
		this->vertices->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSeg_obj,free,(void))

Void ZPP_SimpleSeg_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","alloc",0x6898c9d4,"zpp_nape.geom.ZPP_SimpleSeg.alloc","zpp_nape/geom/Simple.hx",329,0x62f156db)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSeg_obj,alloc,(void))

bool ZPP_SimpleSeg_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleVert a,::zpp_nape::geom::ZPP_SimpleVert b){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","less_xy",0x5f1ac486,"zpp_nape.geom.ZPP_SimpleSeg.less_xy","zpp_nape/geom/Simple.hx",333,0x62f156db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(333)
	return (bool((a->x < b->x)) || bool((bool((a->x == b->x)) && bool((a->y < b->y)))));
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSeg_obj,less_xy,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSeg_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSeg_obj::get( ::zpp_nape::geom::ZPP_SimpleVert left,::zpp_nape::geom::ZPP_SimpleVert right){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SimpleSeg","get",0x726d4035,"zpp_nape.geom.ZPP_SimpleSeg.get","zpp_nape/geom/Simple.hx",356,0x62f156db)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_LINE(357)
	::zpp_nape::geom::ZPP_SimpleSeg ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	{
		HX_STACK_LINE(359)
		if (((::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool == null()))){
			HX_STACK_LINE(360)
			::zpp_nape::geom::ZPP_SimpleSeg _g = ::zpp_nape::geom::ZPP_SimpleSeg_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			ret = _g;
		}
		else{
			HX_STACK_LINE(366)
			ret = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(367)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = ret->next;
			HX_STACK_LINE(368)
			ret->next = null();
		}
		HX_STACK_LINE(373)
		Dynamic();
	}
	HX_STACK_LINE(375)
	ret->left = left;
	HX_STACK_LINE(376)
	ret->right = right;
	HX_STACK_LINE(377)
	ret->vertices->insert(left);
	HX_STACK_LINE(378)
	ret->vertices->insert(right);
	HX_STACK_LINE(379)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSeg_obj,get,return )


ZPP_SimpleSeg_obj::ZPP_SimpleSeg_obj()
{
}

void ZPP_SimpleSeg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleSeg);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleSeg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(node,"node");
}

Dynamic ZPP_SimpleSeg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"less_xy") ) { return less_xy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleSeg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleSeg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("node"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleSeg_obj,left),HX_CSTRING("left")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleSeg_obj,right),HX_CSTRING("right")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(int)offsetof(ZPP_SimpleSeg_obj,vertices),HX_CSTRING("vertices")},
	{hx::fsInt,(int)offsetof(ZPP_SimpleSeg_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSeg_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSeg_obj,prev),HX_CSTRING("prev")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg*/ ,(int)offsetof(ZPP_SimpleSeg_obj,node),HX_CSTRING("node")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("vertices"),
	HX_CSTRING("id"),
	HX_CSTRING("next"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("prev"),
	HX_CSTRING("node"),
	HX_CSTRING("less_xy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_SimpleSeg_obj::__mClass;

void ZPP_SimpleSeg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimpleSeg"), hx::TCanCast< ZPP_SimpleSeg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ZPP_SimpleSeg_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
