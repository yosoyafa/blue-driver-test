OUTDIR=$1/Assets/Resources
ASSET_VERSION=$2

echo "Downloading BlueDriver Assets..."
az artifacts universal download --organization "https://dev.azure.com/RepairOnDemand/" --project "8fad8007-0820-46d7-b5c7-6dab4ec15a78" --scope project --feed "BlueDriver" --name "bluedriver-assets" --version $ASSET_VERSION --path "$OUTDIR"

rsync -a $OUTDIR/ios/* $OUTDIR/
rm -r "$OUTDIR/ios"
rm -r "$OUTDIR/android"