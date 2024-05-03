struct vector{
	float x,y,z;
};
struct vector vectorAdd(struct vector v1,struct vector v2){
	struct vector res={0,0,0};
	res.x=v1.x+v2.x;
	res.y=v1.y+v2.y;
	res.z=v1.z+v2.z;
	return res;
}
struct vector vectorSub(struct vector v1,struct vector v2){
	struct vector res={0,0,0};
	res.x=v1.x-v2.x;
	res.y=v1.y-v2.y;
	res.z=v1.z-v2.z;
	return res;
}
float dotProduct(struct vector v1,struct vector v2){
	float answer;
	answer=(v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z);
	return answer;
}
struct vector crossProduct(struct vector v1,struct vector v2){
	struct vector res={0,0,0};
	res.x=(v1.y*v2.z)-(v1.z*v2.y);
	res.y=(v1.x*v2.z)-(v1.z*v2.x);
	res.z=(v1.x*v2.y)-(v2.x*v1.y);
	return res;
}
