#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_VecMath
#include <zpp_nape/geom/ZPP_VecMath.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_VecMath_obj::__construct()
{
	return null();
}

//ZPP_VecMath_obj::~ZPP_VecMath_obj() { }

Dynamic ZPP_VecMath_obj::__CreateEmpty() { return  new ZPP_VecMath_obj; }
hx::ObjectPtr< ZPP_VecMath_obj > ZPP_VecMath_obj::__new()
{  hx::ObjectPtr< ZPP_VecMath_obj > result = new ZPP_VecMath_obj();
	result->__construct();
	return result;}

Dynamic ZPP_VecMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_VecMath_obj > result = new ZPP_VecMath_obj();
	result->__construct();
	return result;}

Float ZPP_VecMath_obj::vec_dsq( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_VecMath","vec_dsq",0xb07d1caf,"zpp_nape.geom.ZPP_VecMath.vec_dsq","zpp_nape/geom/VecMath.hx",176,0x9d2cc613)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(177)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(178)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(180)
		dx = (ax - bx);
		HX_STACK_LINE(181)
		dy = (ay - by);
	}
	HX_STACK_LINE(183)
	return ((dx * dx) + (dy * dy));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_VecMath_obj,vec_dsq,return )

Float ZPP_VecMath_obj::vec_distance( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_VecMath","vec_distance",0x98be6968,"zpp_nape.geom.ZPP_VecMath.vec_distance","zpp_nape/geom/VecMath.hx",186,0x9d2cc613)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(187)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(188)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(190)
		dx = (ax - bx);
		HX_STACK_LINE(191)
		dy = (ay - by);
	}
	HX_STACK_LINE(193)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_VecMath_obj,vec_distance,return )


ZPP_VecMath_obj::ZPP_VecMath_obj()
{
}

Dynamic ZPP_VecMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vec_dsq") ) { return vec_dsq_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vec_distance") ) { return vec_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_VecMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_VecMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("vec_dsq"),
	HX_CSTRING("vec_distance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_VecMath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_VecMath_obj::__mClass,"__mClass");
};

#endif

Class ZPP_VecMath_obj::__mClass;

void ZPP_VecMath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_VecMath"), hx::TCanCast< ZPP_VecMath_obj> ,sStaticFields,sMemberFields,
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

void ZPP_VecMath_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
